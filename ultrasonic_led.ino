int trigpin=6;
int echopin=5;
int led=3;
int brightness=0;
int fade=0;

long tim;
int distance;
void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}
//program to change the brightness of the led based on the distance measured by the ultrasonic sensor
void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(4);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(15);
  digitalWrite(trigpin,LOW);
  digitalWrite(echopin,HIGH);
  tim=pulseIn(echopin,HIGH);
  //distance = time*speed since ultrasonic sensor uses echo distance=time*speed/2 for sound to hit object and reach the sensor , speed=speed of sound=>0.34 cm/microseconds
  distance=tim*(0.034)/2;
  analogWrite(led,brightness);
  fade=distance;
  brightness+=fade;
  if(brightness<=0 || brightness>=255){
    fade=-fade;
  }
  delay(1);
  // put your main code here, to run repeatedly:
}
