int dp=13;
int a=11;
int b=12;
int c=10;
int d=9;
int e=8;
int f=7;
int g=6;

void display0(){
      digitalWrite(g,HIGH);
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
}
void display1(){
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
}
void display2(){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(g,LOW);
      digitalWrite(c,HIGH);
      digitalWrite(f,HIGH);
}
void display3(){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(g,LOW);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
}
void display4(){
      digitalWrite(a,HIGH);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
}
void display5(){
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      digitalWrite(e,HIGH);
}
void display6(){
      digitalWrite(a,LOW);
      digitalWrite(b,HIGH);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(e,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
}
void display7(){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW); 
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
    }
void display8(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void display9(){
      digitalWrite(a,LOW);
      digitalWrite(b,LOW);
      digitalWrite(c,LOW);
      digitalWrite(d,LOW);
      digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      digitalWrite(e,HIGH);
}

/*void resetdisplay(){
      digitalWrite(a,HIGH);
      digitalWrite(b,HIGH);
      digitalWrite(c,HIGH);
      digitalWrite(d,HIGH);
      digitalWrite(e,HIGH);
      digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
}*/

void setup(){
  int i;
  for(i=6;i<=12;i++){
    pinMode(i,OUTPUT);

  }

}
void loop(){
  display0();
  delay(2000);
  display1();
  delay(2000);
  display2();
  delay(2000);
  display3();
  delay(2000);
  display4();
  delay(2000);
  display5();
  delay(2000);
  display6();
  delay(2000);
  display7();
  delay(2000);
  display8();
  delay(2000);
  display9();
  delay(2000);

}