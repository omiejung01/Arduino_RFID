const int pingPin = 13;
int inPin = 12;
// internal arduino pin

void setup() {
Serial.begin(72000);
}

void loop()
{
long duration, cm;

pinMode(pingPin, OUTPUT);


digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(5);
digitalWrite(pingPin, LOW);
pinMode(inPin, INPUT);
duration = pulseIn(inPin, HIGH);

//cm = microsecondsToCentimeters(duration);

//Serial.print(cm);
//Serial.print("cm");
//Serial.println();

//Remove here
//Serial.print(duration);
//Serial.print("cm");
//Serial.println();

delay(100);
}

long microsecondsToCentimeters(long microseconds)
{
// The speed of sound is 340 m/s or 29 microseconds per centimeter.
// The ping travels out and back, so to find the distance of the
// object we take half of the distance travelled.
return microseconds / 29 / 2;
}
