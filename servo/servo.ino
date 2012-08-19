/*This takes a pot input and controls a servo from 0 to 180 degrees.
Serial.print()can take parameters of analogRead(A0) or x with
x=myservo.read().  */

#include <Servo.h>

Servo myservo;


void setup ()
{  
  Serial.begin(9600);
  myservo.attach(13);
}

void loop()
{
  int pot = analogRead(A0);
   myservo.write(pot);
  Serial.println(pot);
  delay(1); 
  
}
