/* This is just a quick tutorial code of what an on off switch could do
*/
//For this case, we will use the base Arduino uno pin layout
//https://diyi0t.com/arduino-uno-tutorial/ Great information on this
int ledPin = 2
int buttonPin = 4

void setup() //setup here configures the environment on boot of device to register IO in different states.
{
    pinMode(ledPin, OUTPUT)
    pinMode(buttonPin, INPUT)
}

void loop()
{
    pressed = digitalRead(buttonPin); //This will be read as HIGH or LOW
    if (pressed == LOW) {
        digitalWrite(ledPin, HIGH); //Will turn on LED
        delay(5000); //Keep LED on for 5 seconds
        digitalWrite(ledPin, LOW); //Turns it off
    }
    else {
        digitalWrite(ledPin, LOW); //Keeps it off
    }
}

//High low references here https://www.arduino.cc/reference/en/language/variables/constants/constants/
//Great tutorial based off this for beginners to set the code https://www.arduino.cc/en/tutorial/pushbutton