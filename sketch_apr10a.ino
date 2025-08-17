int irSensor = 2;
int relayPin = 12;
bool lightState = false;
bool lastIRState = HIGH;

void setup() {
  pinMode(irSensor, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Relay off initially
  Serial.begin(9600);
}

void loop() {
  bool currentIR = digitalRead(irSensor);

  // Detect falling edge: object appears
  if (lastIRState == HIGH && currentIR == LOW) {
    lightState = !lightState;
    digitalWrite(relayPin, lightState ? LOW : HIGH);  // Inverted for active LOW relay
    Serial.println(lightState ? "ON" : "OFF");
    delay(300);  // debounce
  }

  lastIRState = currentIR;
}
