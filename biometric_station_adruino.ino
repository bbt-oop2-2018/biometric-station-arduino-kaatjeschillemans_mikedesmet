void setup() {
  // De snelheid instellen van de serial
Serial.begin(115200);
Serial.println("Hello World");

}

void loop() {
  // put your main code here, to run repeatedly:
double level = 12.44;
int pubg = 1234;
//Serial.println(String("[") + level + String("|") + pubg + String("]"));
Serial.print("[");
Serial.print(level);
Serial.print("|");
Serial.print(pubg);
Serial.println("]");
//delay is in ms
delay(1000);

}
