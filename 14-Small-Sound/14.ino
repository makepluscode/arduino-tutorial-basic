void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(A0,INPUT);
}

void loop()
{
    // put your main code here, to run repeatedly:
    int SoundLevel = analogRead(A0);
    Serial.print(" Now Sound Level = ");
    Serial.println(SoundLevel);
    delay(300);
}