#include <LiquidCrystal.h>

// Initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Define the PWM pin for backlight
const int backlightPin = 9;

void setup() {
  // Set the backlight pin as an output
  pinMode(backlightPin, OUTPUT);

  // Set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  
  // Print a message to the LCD
  lcd.print("SUCK MY BALLS MR GARRISON");

  // Set the backlight brightness (0-255)
  analogWrite(backlightPin, 255); // Maximum brightness
}

void loop() {
  // Empty loop - no code inside
  // LCD content is static and set up in the setup() function
}
