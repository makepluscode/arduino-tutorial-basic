int Button = 9;
byte LastState = LOW;

void setup()
{
    Serial.begin(9600);
    pinMode(Button, INPUT);
    digitalWrite(Button, HIGH);
}

void loop()
{
    byte NowState = digitalRead(Button);

    if (HIGH == LastState)
    {
        if(LOW == NowState)
        {
            Serial.println("Pushed");
        }
    }
    else
    {
        if (HIGH == NowState)
        {
            Serial.println("Released");
        }
    }
    LastState = digitalRead(Button);
    delay(300);
}