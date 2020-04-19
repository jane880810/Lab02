
const int SW = 6;     
const int ledPin =  13;      

// variables will change:
int j = 0;      

void setup() {

  pinMode(ledPin, OUTPUT);

  pinMode(SW, INPUT);
}

void loop() {
  j = digitalRead(SW);

  if (j == 1) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
