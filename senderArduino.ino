#include<Wire.h>


byte arr[6]={0,1,2,3,4,5};

void setup(){
  Wire.begin(8);
  Wire.onRequest(requestevent);
  
}

void loop(){
  
  delay(500);
}

void requestevent(){
  for(int i=0;i<6;i++){
    Wire.write(arr[i]);
  }
  
}