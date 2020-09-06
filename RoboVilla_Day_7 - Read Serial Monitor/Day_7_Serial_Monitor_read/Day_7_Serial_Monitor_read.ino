int led = 2;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(19200);
}

void loop() {
  while (Serial.available()){
    char seri = Serial.read();

    if (seri == 'n')
    {
      digitalWrite(led, HIGH);
      Serial.println("LED ON");
    }
    else if (seri == 'm')
    {
      digitalWrite(led, LOW);
      Serial.println("LED OFF");
    }
  }
 }
