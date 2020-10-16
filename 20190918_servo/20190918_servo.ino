#include <Servo.h>
Servo s;

void setup() {
  s.attach(3);  
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()>0)
  {
    int num = a.toInt();
    String a =Serial.readString();
    s.write(num);
    Serial.println(num); 
  }
}
