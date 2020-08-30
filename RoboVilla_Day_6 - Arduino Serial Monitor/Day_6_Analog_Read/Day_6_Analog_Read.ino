int button = A0;
int led = 11;
void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);   

}

void loop() {
  int state = analogRead(button);
  Serial.println(state);
  
  if (state < 200)
  {
    digitalWrite(led, HIGH);
  }
  else if (state > 900)
  {
    digitalWrite(led, LOW);
  }
  

}
