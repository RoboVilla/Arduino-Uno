//RoboVilla YouTube Channel
//Watch Full Video URL - https://www.youtube.com/watch?v=v-hVqOMDJqw&list=PLAk2XwfozpbItNJEPJK9Kgac-SF31-Kp_&index=6

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
