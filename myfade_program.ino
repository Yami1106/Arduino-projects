int pin=3;
int brightness=0;
int fadeam=15;

void setup() {
  pinMode(pin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  //analogWrite is used to assign any values other than HIGH and LOW, and the range lies from 0-255
  analogWrite(pin,brightness);

  brightness+=fadeam;
  if(brightness<=0 || brightness>=255){
    fadeam= -fadeam;
  }
  delay(70);
  // put your main code here, to run repeatedly:

}
