#include<Wire.h>

void setup(){
  Wire.begin();
  Serial.begin(9600);
}

void loop(){
  Wire.requestFrom(8,6);
  
  while(Wire.available()){
    byte c=Wire.read();
    Serial.print(c);
    Serial.println();
    delay(1000);
  }
  
}