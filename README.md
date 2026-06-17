# Arduino Assignment 1 — Smart Countdown

This is my submission for Assignment 1 in the
Programming C++ for Engineers Using Arduino course
at GHANA COMMUNICATIONS TECHNOLOGY UNIVERSITY

## What this program does
It counts down from 5 to 1 using a for loop.
On each step:
- It prints "count: N" to the Serial Monitor
- It blinks the LED on pin 7 exactly N times
- Each blink stays ON for  500 milliseconds and OFF for  500 milliseconds
- After blinking, it waits 2000 milliseconds  second before the next count
When the countdown finishes it prints "Countdown is Complete".

## Concepts demonstrated
- Variables (int)
- Custom functions with parameters (flashled)
- The for loop
- Digital output (digitalWrite, pinMode)
- Serial Monitor (Serial.begin, Serial.print, Serial.println)

## How to run it
1. Open the .ino file in the Arduino IDE
2. Connect your Arduino Uno via USB
3. Go to Tools → Board → Arduino Uno
4. Go to Tools → Port → select your port
5. Click Upload
6. Open Tools → Serial Monitor and set baud rate to 9600

## Author
[BENJAMIN AGALISI] — [2526401587]
[GHANA COMMUNICATIONS TECHNOLOGY UNIVERSITY] — [BSC COMPUTER ENGINEERING]
