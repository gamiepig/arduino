#include <Servo.h>

void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(8,INPUT);
  pinMode(7,INPUT);
  
}

void loop() {
  int b=digitalRead(8);
  int t=digitalRead(7);
  if(b==1)
  {
   for(int i=0;i<5;i++)
   {
    digitalWrite(9,1);
    delay(100);
    digitalWrite(9,0);
    delay(100);
   }
   
  }
  if(t==1)
  {
    for(int i=0;i<5;i++)
   {
    digitalWrite(10,1);
    delay(100);
    digitalWrite(10,0);
    delay(100);
   }
  }

}
