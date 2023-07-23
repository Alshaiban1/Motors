// C++ code
//
#include <Servo.h>

int potentiometerValue = 0;

int output = 0;

Servo servo_3;

void setup()
{
  pinMode(A1, INPUT);
  servo_3.attach(3, 500, 2500);
}

void loop()
{
  potentiometerValue = analogRead(A1);
  output = map(potentiometerValue, 0, 1023, 0, 180);
  servo_3.write(output);
  delay(10); // Delay a little bit to improve simulation performance
}