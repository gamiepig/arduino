void setup() {
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(analogRead(A1));
  if(analogRead(A1)<550)
  {
   digitalWrite(9,HIGH);
   digitalWrite(11,LOW); 
  }
  else
  {
    digitalWrite(9,LOW) ;
    digitalWrite(11,HIGH);
  }
}
