int ledPin = 13;
int buttonPin = 7;

void setup()
{
  pinMode(ledPin,OUTPUT); // Set the LED Pin as an output
  pinMode(buttonPin,INPUT_PULLUP); // Set the Tilt Switch as an input
}

void loop()
{
  int digitalVal = digitalRead(buttonPin); // Take a reading

  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW); //Turn the LED off
  }
  else
  {
    digitalWrite(ledPin,HIGH);//Turn the LED on
  }
}
