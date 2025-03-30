#define button 8
#define led 10

int button_status = 0;

void setup() {
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  button_status = digitalRead(button);

  if(button_status == 1)
    digitalWrite(led,HIGH);
  else
    digitalWrite(led,LOW);
  
}
