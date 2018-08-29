void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(9, INPUT);
    digitalWrite(9, HIGH);
}

void loop()
{
    // put your main code here, to run repeatedly:
    if(digitalRead(9) == HIGH)
    {
        Serial.println("Detect ~~~");
    }
    else
    {
        Serial.println("Nothing ~~~");
    }
    delay(300);
}