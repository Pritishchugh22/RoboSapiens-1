#include <Arduino.h>

//Declare all the variables being used here:
int centerIR;
/*int leftIR;
int rightIR;*/

//int leftFlag;
int centerFlag;
//int rightFlag;

//Declare all the functions being used here:
voidsetup()
{
  // put your setup code here, to run once:
  pinMode(7,OUTPUT);   //horizontal motors forward
  pinMode(8,OUTPUT);   //horizontal motors reverse
  pinMode(9,OUTPUT);   //vertical motors forward
  pinMode(10,OUTPUT);   //vertical motors reverse

  Serial.begin(115200);
}

voidloop()
{
  Serial.println(Serial.available());
while(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
if(t==y){
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(8,HIGH);
  delay(200);
  digitalWrite(9,HIGH);
  delay(100);
  digitalWrite(9,HIGH);
  delay(100);
  digitalWrite(10,HIGH);
  delay(200);
}
}
