const int ledpin = 5;

void setup()
{
    // Set your baud rate for your Serial connection
    Serial.begin(9600);

    //Turning on the pin 
    pinMode(ledpin, OUTPUT); 
    
    // Wait for the serial port to connect.
    while (!Serial) {}
}


void loop()
{
    if (Serial.available() > 0)
    {
        // Got something
        int read = Serial.read();
        if (read >= 0)
        {
            // Repeat back what we read in binary
            Serial.write(read);

            // Turn the LED on 
            digitalWrite(ledpin, HIGH); //turns the light on
            delay(1000); //takes a 1 second break before moving on.
            // Turn the LED off
            digitalWrite(ledpin, LOW); //turns the light off.
        }
    }
}
