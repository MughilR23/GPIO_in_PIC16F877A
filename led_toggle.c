#include"GPIO.h"

#define _XTAL_FREQ 8000000
void main(){

pinMode(2,3,OUTPUT);
digitalWrite(2,3,HIGH);
pinMode(2,2,INPUT);
 
while(1){
if(digitalRead(2,2)){
digitalWrite(2,3,HIGH);
}
else {
digitalWrite(2,3,LOW);
}
}
}
