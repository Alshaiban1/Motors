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