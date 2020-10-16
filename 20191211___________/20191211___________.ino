void setup() {
 pinMode(A0,INPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 pinMode(8,INPUT);
 Serial.begin(9600);
 

}

void loop() {
  int a = analogRead(A0);
  int b = digitalRead(8);
  Serial.println(b);
  if(a<330)
  {
    if(b==1)
    {
      for(int i = 0;5 > i;i++)
      {
        digitalWrite(9,1);
        delay(100);
        digitalWrite(9,0);
        delay(100);
      }
    }
  }
  else if(330<=a && a<660)
  {
    if(b==1)
    {
      for(int i = 0;5>i;i++)
      {
        digitalWrite(10,1);
        delay(100);
        digitalWrite(10,0);
        delay(100);
      }
    }
  }
  
  else
  {
    if(b==1)
    {
     for(int i = 0;5>i;i++)
      {
        digitalWrite(11,1);
        delay(100);
        digitalWrite(11,0);
        delay(100);
      } 
    }
  }
  
  

  

}
