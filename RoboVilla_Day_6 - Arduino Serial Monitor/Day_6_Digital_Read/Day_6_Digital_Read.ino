//RoboVilla YouTube Channel
//Watch Full Video URL - https://www.youtube.com/watch?v=v-hVqOMDJqw&list=PLAk2XwfozpbItNJEPJK9Kgac-SF31-Kp_&index=6

int button = 12;
int led = 11;
void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  int state = digitalRead(button);
  if (state == 0)
  {
    digitalWrite(led, HIGH);
    Serial.println("LED ON");
  }
  else
  {
    digitalWrite(led, LOW);
    Serial.println("LED OFF");
  }
  
}
