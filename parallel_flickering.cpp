const int pins[] = {13, 12, 11};
const int N = 3;

void setup() {
  for (int i = 0; i < N; i++) pinMode(pins[i], OUTPUT);
}

void loop() {
  for (int i = 0; i < N; i++) digitalWrite(pins[i], HIGH);
  delay(500);
  for (int i = 0; i < N; i++) digitalWrite(pins[i], LOW);
  delay(500);
}
