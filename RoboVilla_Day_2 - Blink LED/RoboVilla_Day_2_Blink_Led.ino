//RoboVilla YouTube Channel
//Video URL - https://www.youtube.com/watch?v=DvC1gnc68bE&list=PLAk2XwfozpbItNJEPJK9Kgac-SF31-Kp_&index=2

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH); // LED On
  delay(500);             // delay (1000 = 1s)
  digitalWrite(13, LOW);  // LED Off
  delay(500);             // delay

}
