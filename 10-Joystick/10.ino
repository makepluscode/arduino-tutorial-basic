void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(8, INPUT);
    pinMode(9, INPUT);
    pinMode(10,INPUT);
    digitalWrite(10, HIGH);
}

void loop()
{
    // put your main code here, to run repeatedly:
    int x;
    int y;
    int Button;

    x = analogRead(8);
    y = analogRead(9);
    Button = digitalRead(10);

    Serial.print("X Axis ");
    Serial.print(x, DEC);

    Serial.print(", Y Axis ");
    Serial.print(y, DEC);

    Serial.print(", Button State is ");

    if(Button == 0)
    {
        Serial.println("ON");
    }
    else if(Button == 1)
    {
        Serial.println("OFF");
    }
    delay(300);
}