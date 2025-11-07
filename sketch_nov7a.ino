#define MINU_LED 13

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

int loops = 3;

void loop() {
  loops++;
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(11, HIGH);
  Serial.println("blink all on");
  delay(1000);
  digitalWrite(MINU_LED, LOW);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(11, LOW);
  Serial.println("blink all off");
  Serial.println(loops);
  delay(1000);
}
