void setup()
{
    // put your setup code here, to run once:
    pinMode(12, OUTPUT);
    digitalWrite(12, LOW);
}

void loop()
{
    // put your main code here, to run repeatedly:
    digitalWrite(12, HIGH);
    delay(7000);
    digitalWrite(12, LOW);
    delay(1000);
}