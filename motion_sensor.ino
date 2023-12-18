int pir=3;
int led=13;
int buzz=2;
int state=LOW;
int val=0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(buzz,OUTPUT);
  pinMode(pir,INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  val=digitalRead(pir);
  if (val==HIGH){
    digitalWrite(led,HIGH);
    digitalWrite(buzz,HIGH);
    delay(100);
    
    if (state=LOW){
      Serial.print("Motion Detected");
      state=HIGH;
    }
  }
  else {
      digitalWrite(led, LOW); 
      digitalWrite(buzz,LOW);
      delay(200);             
      
      if (state == HIGH){
        Serial.print("Motion stopped!");
        state = LOW;    
    }
  }
  
  // put your main code here, to run repeatedly:

}
