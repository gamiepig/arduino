#include <DHT.h>
#include <DHT_U.h>

DHT dht(12,DHT11);


void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 TEST");
  dht.begin();  
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  int a = analogRead(A0);
  delay(2000);

  
  float h = dht.readHumidity();
  Serial.print("습도:");    
  Serial.print(h);
  Serial.println('%');
   
  if(a < 300){
    if(h<80)
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

  else if(a>=300 && a<600)
  {
    if(h<80){
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
  else
  {
    if(h<80)
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
}
