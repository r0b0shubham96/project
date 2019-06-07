
const int pwm  = 10;    
const int dir  = 7;    
                              
void setup()

{
    pinMode(pwm, OUTPUT);
    pinMode(dir, OUTPUT);
    Serial.begin(9600);
    Serial.println(" speed = 0-255 ,direction = 0 or 1 ");
}

void loop(){
  while(1)
  {
  if(Serial.available())         
    { 
      int speed = Serial.parseInt();  //Receive Value from serial monitor
      int direction = Serial.parseInt(); 
      Serial.println(speed,direction);
        analogWrite(pwm, speed);      //sets the motors speed
       digitalWrite(dir, direction);
     }
}
}
