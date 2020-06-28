#include <Arduino.h>

//Declare all the variables being used here:
int centerIR;
/*int leftIR;
int rightIR;*/

//int leftFlag;
int centerFlag;
//int rightFlag;

//Declare all the functions being used here:
voidstopp();
voidup();
voidsetup()
{
  // put your setup code here, to run once:
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
 digitalWrite(7, low);
 digitalWrite(8, low);

  Serial.begin(115200);
}

voidloop()
{
  // put your main code here, to run repeatedly:
  centerIR = analogRead(A0);

  if (centerIR > 200)
  {
    centerFlag = 1;
  }
  else
  {
    centerFlag = 0;
  }

  if (flag==1){
    stopp()
  }
  else
  {
    up();
  }
}

//Function definitions go here:
voidstopp()
{
  Serial.println("stoping");
  digitalWrite(7, LOW);
  delay(1000);
}

voidforward()
{
  Serial.println("up");
  digitalWrite(7, HIGH);
 
}
