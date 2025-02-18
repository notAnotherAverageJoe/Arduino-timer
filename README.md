# LCD Timer Example

This Arduino-based project displays a timer on a 16x2 LCD, updating every second, along with whether the current second count is even or odd.

## Requirements

- Arduino board (e.g., Arduino Uno)
- 16x2 LCD display
- LiquidCrystal library (included in the Arduino IDE)

## Circuit

Connect the LCD pins as follows:

- RS to Pin 12
- Enable to Pin 11
- D4 to Pin 5
- D5 to Pin 4
- D6 to Pin 3
- D7 to Pin 2

## Output

Secs: 1 is Odd
Secs: 2 is Even
Secs: 3 is Odd
Secs: 4 is Even
Secs: 5 is Odd
Secs: 6 is Even

## Note for Non-Arduino Users
This project is written for Arduino-compatible environments. If you don't have the Arduino IDE, you can:
1. Use Arduino CLI (see https://arduino.github.io/arduino-cli/).
2. Simulate it using tools like Tinkercad Circuits (https://www.tinkercad.com/circuits).
3. Use a VS Code extension for Arduino development.
