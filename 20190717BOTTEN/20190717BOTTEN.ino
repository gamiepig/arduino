void setup() {
  pinMode(8,INPUT); 
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(A0)); 
  if(digital
  Read(8)==HIGH) 
  {
    digitalWrite(11,HIGH);
  }
  else
  {
   digitalWrite(11,LOW); 
  }
  
  
  }

