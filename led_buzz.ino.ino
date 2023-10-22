int buzz=3;
int led=4;
int freq=255;

void setup() {
  pinMode(buzz,OUTPUT);
  pinMode(led,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  analogWrite(buzz,freq);
  digitalWrite(led,HIGH);
  freq-=100;
  if(freq<=0){
    freq+=50;
    digitalWrite(led,LOW);
  }
  delay(1);
  
  // put your main code here, to run repeatedly:

}
