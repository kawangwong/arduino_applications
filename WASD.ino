#include <Keyboard.h> // The main library for sending keystrokes.

void setup() 
{
 Keyboard.begin();  // Initialise the library.
}

// Loop around waiting for a button press on pin 2.
// When the button is pressed, go to the function triggerAutomation.
void loop() 
{
  if(digitalRead(2) == HIGH)
  {
    triggerW();    
  }
  if(digitalRead(3) == HIGH)
  {
    triggerA();    
  }
  if(digitalRead(4) == HIGH)
  {
    triggerS();
  }
  if(digitalRead(5) == HIGH)
  {
    triggerD();    
  }
}

void triggerN()
{
  Keyboard.press('w');              // Press and hold the 'w' key.
  delay(100);                       // Wait for the computer to register the press.
  Keyboard.releaseAll();            // Release both of the above keys.
}
void triggerA()
{
  Keyboard.press('a');              // Press and hold the 'a' key.
  delay(100);                       // Wait for the computer to register the press.
  Keyboard.releaseAll();            // Release both of the above keys.
}
void triggerS()
{
  Keyboard.press('s');              // Press and hold the 's' key.
  delay(100);                       // Wait for the computer to register the press.
  Keyboard.releaseAll();            // Release both of the above keys.
}
void triggerD()
{
  Keyboard.press('d');              // Press and hold the 'd' key.
  delay(100);                       // Wait for the computer to register the press.
  Keyboard.releaseAll();            // Release both of the above keys.
}
