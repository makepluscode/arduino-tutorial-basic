int tiltState = 0;
int brightlevel = 0;

void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(9, OUTPUT);
    pinMode(8, INPUT);
    digitalWrite(8, HIGH);
}

void loop()
{
    // put your main code here, to run repeatedly:
    tiltState = digitalRead(8);

    if(tiltState == LOW && brightlevel < 255)
    {
        brightlevel++;
    }
    if(tiltState == HIGH && brightlevel > 0)
    {
        brightlevel--;
    }

    analogWrite(9, brightlevel);
    delay(30);
}