// RGB light programmed by JYW

#define RED 13
#define YELLOW 12
#define GREEN 11

// the setup function runs once when you press reset or power the board
void setup()
{
    // initialize digital pin LED_BUILTIN as an output.
    pinMode(RED, OUTPUT);
    pinMode(YELLOW, OUTPUT);
    pinMode(GREEN, OUTPUT);
}

void blink(int light, int duration, int times)
{
    for (int i = 0; i < times; i++)
    {
        digitalWrite(light, HIGH);
        delay(duration);
        digitalWrite(light, LOW);
        delay(duration);
    }
}

// the loop function runs over and over again forever
void loop()
{
    blink(RED, 250, 3);
    blink(YELLOW, 250, 3);
    blink(GREEN, 250, 3);
}
