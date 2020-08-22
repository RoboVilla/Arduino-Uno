int button1 = 10;
int button2 = 11;
int led = 9;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

}

void loop() {
  int button1_state = digitalRead(button1);
  int button2_state = digitalRead(button2);
  if (button1_state == 0)
  {
    //LED ON
    digitalWrite(led, LOW);
  }
  if (button2_state == 0)
  {
    //LED OFF
    digitalWrite(led, HIGH);
  }
  

}
