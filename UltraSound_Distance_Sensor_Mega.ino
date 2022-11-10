#include <LiquidCrystal.h>            // includes the LiquidCrystal Library
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);  // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distanceCm, distanceInch;
void setup() {
  Serial.begin(9600); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.034 / 2;
  distanceInch = duration * 0.0133 / 2;
  //Serial.setCursor(0, 0); // Sets the location at which subsequent text written to the LCD will be displayed
  Serial.println("Distance: ");  // Prints string "Distance" on the LCD
  ("Distance: ");                // Prints string "Distance" on the LCD
  Serial.print(distanceCm);      // Prints the distance value from the sensor
  ("Distance: ");                // Prints string "Distance" on the LCD
  Serial.print(" cm");
  delay(10);
  ("Distance: ");  // Prints string "Distance" on the LCD
  //Serial.setCursor(0, 1);
  ("Distance: ");  // Prints string "Distance" on the LCD
  Serial.print("Distance: ");
  ("Distance: ");  // Prints string "Distance" on the LCD
  Serial.print(distanceInch);
  ("Distance: ");  // Prints string "Distance" on the LCD
  Serial.print(" inch");
  delay(10);
}