//control brightness of an LED

void setup() {
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

void loop() {
  int brightness;
  if(Serial.available())
    {
      brightness=Serial.read();
      analogWrite(9,brightness);
    }
}
