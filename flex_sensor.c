/*
    Project name : Flex Sensor
    Modified Date: 13-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-flex-sensor
*/

const int flexSensorPin = A0; // Analog pin connected to the flex sensor
int flexValue; // Variable to store flex sensor value

void setup() 
{
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  flexValue = analogRead(flexSensorPin); // Read analog value from flex sensor

  // Print the flex sensor value to Serial Monitor
  Serial.print("Flex Sensor Value: ");
  Serial.println(flexValue);

  delay(100); // Small delay before the next reading
}
