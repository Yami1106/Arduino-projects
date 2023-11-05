int ledPin = 13;
int buzzPin = 7;
int buttonPin=2;

void setup()
{
  pinMode(ledPin,OUTPUT); // Set the LED Pin as an output
  pinMode(buzzPin,OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP); // Set the Tilt Switch as an input
}

void loop()
{
  int digitalVal = digitalRead(buttonPin); // Take a reading

  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW); //Turn the LED off
    digitalWrite(buzzPin,LOW);
    
  }
  else
  {
    digitalWrite(ledPin,HIGH);//Turn the LED on
    digitalWrite(buzzPin,HIGH);
  }
}
