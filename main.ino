int wet = 291;
int dry = 728;
int pump = 5;

void setup()
{
    Serial.begin(9600);
    pinMode(pump, OUTPUT);
}

void loop()
{
    int sensorValue = analogRead(A0);
    float humidity = map(sensorValue, wet, dry, 100, 0);

    Serial.println("humidity")
    Serial.println("%");

    if (humidity < 50.00)
    {
        digitalWrite(pump, LOW);
        delay(4000);
        digitalWrite(pump, HIGH);
    }
    else
    {
        digitalWrite(pump, HIGH);
    }
    delay(10000);
}
