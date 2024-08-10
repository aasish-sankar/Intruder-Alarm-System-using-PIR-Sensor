// Intruder Alarm System using PIR Sensor
// Components: Arduino Uno, HC-SR501 PIR Sensor, 5V Relay Module, Buzzer

const int pirSensorPin = 2;    
const int relayPin = 8;        
const int ledPin = 13;        

void setup() {

  Serial.begin(9600);

  pinMode(pirSensorPin, INPUT);      // PIR sensor as input
  pinMode(relayPin, OUTPUT);         // Relay module as output
  pinMode(ledPin, OUTPUT);           // LED as output (optional)

  digitalWrite(relayPin, LOW);
  digitalWrite(ledPin, LOW);

  Serial.println("Intruder Alarm System Initialized.");
}

void loop() {
  int motionDetected = digitalRead(pirSensorPin);

  if (motionDetected == HIGH) {
    Serial.println("Motion Detected! Activating Alarm.");

    digitalWrite(relayPin, HIGH);

    digitalWrite(ledPin, HIGH);

    delay(10000);  // 10000 milliseconds = 10 seconds

    digitalWrite(relayPin, LOW);

    digitalWrite(ledPin, LOW);

    Serial.println("Alarm Deactivated. Monitoring...");
  } else {
    digitalWrite(relayPin, LOW);  
    digitalWrite(ledPin, LOW);    
  }

  delay(500);
}
