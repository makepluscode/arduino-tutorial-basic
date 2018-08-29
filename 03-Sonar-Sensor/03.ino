void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(2,OUTPUT);
    pinMode(3,INPUT);

}

void loop()
{
    // put your main code here, to run repeatedly:
    int distance, cm;

    digitalWrite(2, HIGH);
    delayMicroseconds(10);
    digitalWrite(2, LOW);

    distance = pulseIn(3, HIGH);
    cm = calDistance(distance);

    Serial.print(cm);
    Serial.println("cm");

    delay(300);
}

int calDistance(int distance)
{
    return distance/29/2;
}