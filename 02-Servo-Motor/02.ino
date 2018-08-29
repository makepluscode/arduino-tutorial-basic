#include <Servo.h>

Servo servo;
int servoPin = 9;
int angle = 90;

void setup()
{
    // put your setup code here, to run once:
    servo.attach(servoPin);
}

void loop()
{
    // put your main code here, to run repeatedly:

    servo.write(angle);

    if(angle == 90)
    {
        angle = -90;
    }
    else
    {
        angle =90;
    }

    delay(1000);
}