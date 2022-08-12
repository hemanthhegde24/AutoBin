#define trigPin 12

#define echoPin 13

#define led 8

void setup()

{ Serial.begin (9600);

pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);

pinMode(led, OUTPUT);

}

void loop()

{ long duration, distance;

digitalWrite(trigPin, LOW);

delayMicroseconds(2);

digitalWrite(trigPin, HIGH);

delayMicroseconds(10);

digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);

distance = (duration/2) / 29.1;

if (distance < 10)

{ digitalWrite(led,HIGH);

}

else {

digitalWrite(led,LOW);

}

Serial.print(distance);

Serial.println(" cm");

delay(500);

}
