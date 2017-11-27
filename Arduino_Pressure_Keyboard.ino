#include "Keyboard.h"

int SensorPin0 = A0;
int SensorPin1 = A1;
int SensorPin2 = A2;
int SensorPin3 = A3;

void setup() {
  Serial.begin(9600);
  Keyboard.begin();
}

void loop() {
  int SensorReading0 = analogRead(SensorPin0);
  int sensor0 = map(SensorReading0, 0, 1024, 0, 255);
  Serial.println(sensor0);

  int SensorReading1 = analogRead(SensorPin1);
  int sensor1 = map(SensorReading1, 0, 1024, 0, 255);
  Serial.println(sensor1);

  int SensorReading2 = analogRead(SensorPin2);
  int sensor2 = map(SensorReading2, 0, 1024, 0, 255);
  Serial.println(sensor2);

  int SensorReading3 = analogRead(SensorPin3);
  int sensor3 = map(SensorReading3, 0, 1024, 0, 255);
  Serial.println(sensor3);

  delay(100);
  if (sensor0 >= 100)
  {
    Keyboard.write('a');
    delay(1000);
  }

  else if (sensor1 >= 100)
  {
    Keyboard.write('s');
    delay(1000);
  }
  else if (sensor2 >= 100)
  {
    delay(4000);
    Keyboard.write('d');
    delay(1000);
  }
  else if (sensor3 >= 100)
  {
    delay(4000);
    Keyboard.write('f');
    delay(1000);
  }

}
/*
  space for keyboard test
*/
