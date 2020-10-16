


void setup() {
   pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(11,OUTPUT);
   pinMode(7,INPUT);
   pinMode(8,OUTPUT);
   Serial.begin(9600);  

}

void loop() {
 if(digitalRead(8) == HIGH)
 {
  for(int i=0;i<5;i++)
  {
   digitalWrite(9,HIGH);
   digitalWrite(10,HIGH);
   delay(500);
   digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   delay(500);
  }
 } 
  
 else if(digitalRead (7)==HIGH)
 {
  for(int i=0;i<5;i++)
  {
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(500);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(500);
  }
 }
 else
 {
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
 }
  
}
