int leds[] = {2,3,4,5,6,7};

void setup() {
  for(int x = 0; x <= 6;x++){
    pinMode(leds[x],OUTPUT);
  }

}

void loop() {
  // for(int x = 0; x <= 6;x++){
  //   digitalWrite(leds[x],HIGH);
  //   delay(50);
  //   if(x != 0){
  //     digitalWrite(leds[x-1],LOW);
  //     delay(100);
  //   }
  // }

for(int x = 0; x <= 6;x++){
  digitalWrite(leds[x],HIGH);
  delay(50);
  digitalWrite(leds[x],LOW);
}

for(int y = 6; y <= 0;y--){
  digitalWrite(leds[y],HIGH);
  delay(50);
  digitalWrite(leds[y],LOW);
}

  //for test leds
  // for(int x = 0; x <= 6;x++){
  //   digitalWrite(leds[x],HIGH);
  // }

}
