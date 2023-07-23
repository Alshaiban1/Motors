# Motors
This repository contains files for two motors, a servo-motor and a DC-motor.

## Servo-motor
A potentiometer controlled servo motor moving in 180 degrees.
![Servo Motor Circuit](https://github.com/Alshaiban1/Motors/assets/139134530/2d549b4b-e253-497b-b811-5dd909aa882f)

Tinkercad link:
https://www.tinkercad.com/things/j8SWGftz0Sf

### C++ Code

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

## DC-motor
A potentiometer controlled DC motor.
![DC Motor](https://github.com/Alshaiban1/Motors/assets/139134530/89744a9c-9476-4f13-911a-cbe7dff4675b)

Tinkercad link:
https://www.tinkercad.com/things/7N4IUE6jaJo

### C++ Code

// C++ code
//

int potentiometerValue;  // Declare variable for potentiometer value
int output;              // Declare variable to store output

int reversePin = 10;          // Declare variablies and corresponding pins
int forwardPin = 9;
void setup()
{

  Serial.begin(9600);   // Serial monitor setup 
  
  pinMode (forwardPin, OUTPUT);
  pinMode (reversePin, OUTPUT);
  
}

void loop()
{
  
  potentiometerValue = analogRead(A0); // Analog pin A0 connected to read value of potentiometer
  
 output = map(potentiometerValue, 0, 1023, 0, 255); // Scaling the output from the potentiometer to 255
  
  analogWrite(forwardPin, output);   // DC motor rotation speed controlled by output  
                                     // For reverse rotation change forwardPin to reversePin
  
  
  Serial.println(output); // Print value of output on serial monitor
  delay(50);  // Delay a little bit to improve simulation performance
}
