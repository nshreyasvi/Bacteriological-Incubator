#include <dht.h>
#include <DHT.h>
#include "DHT.h"
#define dht_apin A0 // Analog Pin sensor is connected to
 
dht DHT;
#define RELAY1  6                        
#define RELAY2  7                        
#define RELAY3  8                        
#define RELAY4  9 

void setup(){
  pinMode(RELAY1, OUTPUT);       
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT); 
  
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);//Wait before accessing Sensor
 
}

void loop(){
    //Start of Program 
 
    DHT.read11(dht_apin);
    
    Serial.print("Current humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%  ");
    Serial.print("temperature = ");
    Serial.print(DHT.temperature); 
    Serial.println("C  ");
    
    delay(2000);                        //Wait 5 seconds before accessing sensor again.
 
    //Fastest should be once every two seconds.
    
    digitalWrite(RELAY1,LOW);           // Turns ON Relays 1
    delay(10000);                       
    digitalWrite(RELAY1,HIGH);          // Turns Relay Off
    
    digitalWrite(RELAY2,LOW);           // Turns ON Relays 2
    delay(10000);
    digitalWrite(RELAY2,HIGH);          // Turns Relay Off    
    
    digitalWrite(RELAY3,LOW);
    delay(10000); 
    digitalWrite(RELAY3,HIGH); 

    digitalWrite(RELAY4,LOW); 
    delay(10000);           
    digitalWrite(RELAY4,HIGH);          // Turns ON Relays 4
    
}
