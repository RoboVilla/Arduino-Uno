int led = 2;
void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(19200);
}

void loop() {
  while (Serial.available()){
    String seri = Serial.readString();
    seri.remove(seri.length()-1,1);

    if (seri == "on")
    {
      digitalWrite(led, HIGH);
      Serial.println("LED ON");
    }
    else if (seri == "off")
    {
      digitalWrite(led, LOW);
      Serial.println("LED OFF");
    }
  }
 }
