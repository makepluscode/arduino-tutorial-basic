void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(9, INPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    if(digitalRead(9) == LOW)
    {
        Serial.println(" Detected");
    }
    else
    {
        Serial.print("--");
    }
    delay(50);
}