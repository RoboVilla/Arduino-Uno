int button = 10;
int led = 9;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  //digitalWrite(button, HIGH); 

}

void loop() {
  int state = digitalRead(button);
  if (state == 0)
  {
    //LED ON
    digitalWrite(led, HIGH);
  }
  else
  {
    //LED OFF
    digitalWrite(led, LOW);
  }
  

}
