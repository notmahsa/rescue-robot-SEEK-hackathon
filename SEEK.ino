#include <Servo.h>

#define R1 10
#define R2 11
#define L1 5
#define L2 6
#define Sr 4
#define Sl 3

  // create servo object to control a servo 

#define pinRServo 4
#define pinLServo 3
Servo rServo;
Servo lServo;
boolean refresh = false;  // toggle refresh on/off

void setup(){
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  Serial.begin(9600);

  // attaches the servo on pin to the servo object
  rServo.attach(pinRServo);  
  lServo.attach(pinLServo); 

  // init angle of servo inbetween two limitations
  rServo.write(0);
  lServo.write(180); 
}
void servoDown()    {
    rServo.write(35);
    lServo.write(180);
}

void servoUp(){
    rServo.write(105);
    lServo.write(105); 
}
void LEDon(){
  digitalWrite(A0, HIGH);
  digitalWrite(A1, HIGH);
}
void LEDoff(){
  digitalWrite(A0, LOW);
  digitalWrite(A1, LOW);
}

void loop() 
{  
  servoUp();
  LEDon();
    
} 
