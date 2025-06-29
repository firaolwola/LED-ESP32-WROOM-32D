const int ledPin = 23;    // LED on GPIO 23
const int buttonPin = 22; // Button on GPIO 22

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); // use internal pull-up resistor
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    // Button is pressed (LOW when pressed)
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  } else {
    // Button not pressed
    digitalWrite(ledPin, HIGH); // Keep LED ON
  }
}
