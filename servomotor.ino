#include <Servo.h>

Servo servo;
int pos=0;

void setup() {
  servo.attach(6);
  // put your setup code here, to run once:

}

void loop() {
    for (pos = 0; pos <= 180; pos += 5) { 
    servo.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 5) { 
    servo.write(pos);             
    delay(15);                       
  }
  // put your main code here, to run repeatedly:

}
