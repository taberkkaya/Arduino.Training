const int motor = 9;


void setup() {
  pinMode(motor,OUTPUT);
}

void loop() {
analogWrite(motor, 200);
delay(2000);

analogWrite(motor, 0);
delay(1000);

analogWrite(motor, 200);
delay(1000);

}
