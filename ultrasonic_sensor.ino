int trigpin=6;
int echopin=5;

long tim;
int distance;
void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

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
  Serial.print("disatnce: ");
  Serial.print(distance);
  Serial.println("cm");
  // put your main code here, to run repeatedly:
}
