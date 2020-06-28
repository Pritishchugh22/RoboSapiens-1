#include <Arduino.h>

//Declare all the variables being used here:
int centerIR;

int right_Motor1=7;
int right_Motor2=8;
int right_Motor3=9;
int right_Motor4=10;

int left_motor1=11;
int left_motor2=12;
int left_motor3=13;
int left_motor4=14;

int right_Motor11=15;
int right_Motor22=16;
int right_Motor32=17;
int right_Motor42=18;

int left_motor12=18;
int left_motor22=20;
int left_motor32=21;
int left_motor42=22;

//for Height IR
int centerFlag,leftFlag,rightFlag;

//for Left arm IR
int leftIR

//for right IR
int rightIR

int MAX_Height=200


//Declare all the functions being used here:
forward_MOTOR1();
forward_MOTOR2();
forward_MOTOR3();
forward_MOTOR4();
stop_MOTOR4();
stop_MOTOR3();
stop_MOTOR2();
stop_MOTOR1();
reverse_motor3();
reverse_motor2();
reverse_motor1();

voidsetup()
{
  // put your setup code here, to run once:
    pinMode(right_Motor1, OUTPUT);
    pinMode(right_Motor2, OUTPUT);
    pinMode(right_Motor3, OUTPUT);
    pinMode(right_Motor4, OUTPUT);
    pinMode(left_motor1, OUTPUT);
    pinMode(left_motor2, OUTPUT);
    pinMode(left_motor3, OUTPUT);
    pinMode(left_motor4, OUTPUT);

    Serial.begin(115200);
}

voidloop()
{
  // put your main code here, to run repeatedly:
  // Check Height
  centerIR = analogRead(A0);
  if (centerIR > 200)
  {
    centerFlag = 1;
  }
  else
  {
    centerFlag = 0;
  }

  if (centerFlag==1){
    forward_MOTOR1()
  }
  else
  {
    stop_MOTOR1
  }

    //Motor of arms starts moving
  if (rightIR > 30)
  {
    rightFlag = 1;
  }
  else
  {
    rightFlag = 0;
  }
  if (leftIR > 30)
  {
    leftFlag = 1;
  }
  else
  {
    leftFlag = 0;
  }
  
  if (leftIR==1 and rightIR==1){
    forward_MOTOR2();
  }
  else
  {
    stop_MOTOR2();
  }
  delay(5);
  //picks up
  forward_MOTOR3();
  //compressing motor to hold the parcel
  forward_MOTOR4();
  stop_MOTOR4();
  //these are called so that in comes back to it's intial position
  reverse_motor3();
  reverse_motor2();
  reverse_motor1();
  delay(10);

}

//Function definitions go here:



void forward_MOTOR1()
{
    digitalWrite(right_Motor1, HIGH);
    digitalWrite(left_motor1, HIGH);
    digitalWrite(right_Motor12, LOW);
    digitalWrite(left_motor12, LOW);
    delay(5);
}

void forward_MOTOR2()
{
    digitalWrite(right_Motor2, HIGH);
    digitalWrite(left_motor2, HIGH);
     digitalWrite(right_Motor2, LOW);
    digitalWrite(left_motor2, LOW);
    delay(5);
}


void forward_MOTOR3()
{
    digitalWrite(right_Motor3, HIGH);
    digitalWrite(left_motor3, HIGH);
    digitalWrite(right_Motor22, LOW);
    digitalWrite(left_motor22, LOW);
    delay(5);
}


void forward_MOTOR4()
{
    digitalWrite(right_Motor4, HIGH);
    digitalWrite(left_motor4, HIGH);
    digitalWrite(right_Motor4, LOW);
    digitalWrite(left_motor4, LOW);
    delay(5);
}


void stop_MOTOR1()
{
    digitalWrite(right_Motor1, LOW);
    digitalWrite(left_motor1, LOW);
    digitalWrite(right_Motor11, LOW);
    digitalWrite(left_motor11, LOW);
    delay(5);
}

void stop_MOTOR2()
{
    digitalWrite(right_Motor2, LOW);
    digitalWrite(left_motor2, LOW);
    digitalWrite(right_Motor22, LOW);
    digitalWrite(left_motor22, LOW);
    delay(5);
}

void stop_MOTOR4()
{
    digitalWrite(right_Motor4, LOW);
    digitalWrite(left_motor4, LOW);
    digitalWrite(right_Motor42, LOW);
    digitalWrite(left_motor42, LOW);
    delay(5);
}

void reverse_motor2()
{
    digitalWrite(right_Motor2, HIGH);
    digitalWrite(left_motor2, LOW);
    digitalWrite(right_Motor22, LOW);
    digitalWrite(left_motor22, HIGH);
    delay(5);
}

void reverse_motor3()
{
    digitalWrite(right_Motor2, HIGH);
    digitalWrite(left_motor2, HIGH);
    digitalWrite(right_Motor32, LOW);
    digitalWrite(left_motor32, HIGH);
    delay(5);
}

void reverse_motor4()
{
    digitalWrite(right_Motor4, HIGH);
    digitalWrite(left_motor4, HIGH);
    digitalWrite(right_Motor42, LOW);
    digitalWrite(left_motor42, HIGH);
    delay(5);
}