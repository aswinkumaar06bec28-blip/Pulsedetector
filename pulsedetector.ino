// Constants
const int SENSOR_PIN = A0;    // Pulse sensor connected to A0
const int LED_PIN = 13;       // Onboard LED blinks with heartbeat
const int THRESHOLD = 550;    // Adjust this based on your sensor's sensitivity

// Variables
int sensorValue;
bool pulseDetected = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Pulse Detector Initialized...");
}

void loop() {
  sensorValue = analogRead(SENSOR_PIN);

  // If the signal rises above the threshold, it's a heartbeat
  if (sensorValue > THRESHOLD) {
    if (!pulseDetected) {
      digitalWrite(LED_PIN, HIGH);
      Serial.print("Beat Detected! Signal: ");
      Serial.println(sensorValue);
      pulseDetected = true;
    }
  } else {
    digitalWrite(LED_PIN, LOW);
    pulseDetected = false;
  }

  delay(20); // Small delay for stability
}