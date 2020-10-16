#include <DHT.h>
#include <DHT_U.h>
#define DHTPIN 12
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11 TEST");

  dht.begin();
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  delay(2000);

  float t=dht.readTemperature();
  float h=dht.readHumidity();

  Serial.print("습도:");
  Serial.print(h);
  Serial.println("*C");
  Serial.print("온도:");
  Serial.print(t);
  Serial.println('%');
  if(h<70)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
  }
  else
  {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
  }

}
