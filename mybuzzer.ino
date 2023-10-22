
int buzz=3;
int high=255;
void setup() {
  pinMode(buzz,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  analogWrite(buzz,high);
  high-=100;
  if(high<=0){
    high+=50;
  }
  delay(100);
  // put your main code here, to run repeatedly:

}
