const byte LED = 13;
const byte SWITCH = 2;

// Interrupt Service Routine (ISR)

void setup ()
{
  pinMode (LED, OUTPUT);  // so we can update the LED
  pinMode (SWITCH, INPUT_PULLUP);
  attachInterrupt (digitalPinToInterrupt (SWITCH), switchPressed, CHANGE);  // attach interrupt handler
  Serial.begin(9600);

  
}  

void switchPressed ()
{
  if 
  (digitalRead (SWITCH) == HIGH)
    digitalWrite (LED, HIGH);
    else 
    digitalWrite (LED, LOW);
 
}  // end of switchPressed

void loop ()
{
  // loop doing nothing
}
