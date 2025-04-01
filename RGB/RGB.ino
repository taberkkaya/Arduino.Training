#define pot A0

#define red 9
#define green 10
#define blue 11

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  Serial.begin(9600);
  // digitalWrite(red,LOW);
  // digitalWrite(green,HIGH);
  // digitalWrite(blue,HIGH);

}

void loop() {
  int potValue = analogRead(pot);
  int potValue2 = map(potValue,0,1023,0,255);

  Serial.println(potValue2);

  // digitalWrite(red,potValue2);
  // digitalWrite(green,HIGH);
  // digitalWrite(blue,HIGH);

  if(potValue >= 0 && potValue <= 341){
    analogWrite(red,potValue2);
    analogWrite(green,HIGH);
    analogWrite(blue,HIGH);
  }
  else if(potValue >= 341 && potValue <= 682){
    analogWrite(red,HIGH);
    analogWrite(green,potValue2);
    analogWrite(blue,HIGH);
  }else{
    analogWrite(red,HIGH);
    analogWrite(green,HIGH);
    analogWrite(blue,potValue2);
  }



}
