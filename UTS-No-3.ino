int Red = 1;
int Yellow = 2;
int Green = 3;

int red = 11;
int yellow = 12;
int green = 13;

void setup() {
  pinMode(Red, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Green, OUTPUT);

  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  digitalWrite(Red, 1);
  digitalWrite(green, 1);
  delay(1500);

  digitalWrite(Red, 1);
  digitalWrite(green, 0);
  digitalWrite(yellow, 1);
  delay(1000);

  digitalWrite(Red, 0);
  digitalWrite(Green, 1);
  digitalWrite(yellow, 0);
  digitalWrite(red, 1);
  delay(1500);

  digitalWrite(Red, 0);
  digitalWrite(Green, 0);
  digitalWrite(Yellow, 1);
  digitalWrite(red, 1);
  delay(1000);
  
  digitalWrite(Yellow, 0);
  digitalWrite(red, 0);
}
