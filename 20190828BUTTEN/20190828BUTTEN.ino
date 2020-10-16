void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(8));
  if(analogRead(A0) < 300)
  {
    if(digitalRead(8)==HIGH)
    {
      digitalWrite(9,HIGH);
      digitalWrite(10,HIGH);       
      digitalWrite(11,LOW);

    }
    else
    {
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      digitalWrite(11,LOW); 
    }

  }
  else if(analogRead(A0)>=300&& analogRead(A0)<600)
  {
    if(digitalRead(8)==HIGH)
    {
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);       
      digitalWrite(11,HIGH);

    }
    else
    {
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);
      digitalWrite(11,LOW); 
    }
  }
  else
  {
    if(digitalRead(8)==HIGH)
    {
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH);       
      digitalWrite(11,HIGH);

    }
    else
    {
      digitalWrite(9,LOW);
      digitalWrite(10,LOW);
      digitalWrite(11,HIGH); 
    }
    
  
  }
}

