
#define pwm 7
#define dir 6
int pwm_value = 0;
int opposite_i;
void setup() {
pinMode(pwm, OUTPUT);
pinMode(dir, OUTPUT);
Serial.begin(9600);
//Serial.println(&quot;DIR&quot;);
}
void loop() {
digitalWrite(pwm,HIGH);

for(int i=0;i<=255;i++)
{
analogWrite(dir,i);
opposite_i=255-i;
delay(120);
Serial.println(i);
}
while(1)
continue;
}
