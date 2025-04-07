#define SensorPin 3
#define MotorPin 5

int MotorDurum = HIGH;

void setup() {

  //   Serial.begin(9600);
  // Serial.println("Pot Değer Okuma");
  pinMode(SensorPin,INPUT);
  pinMode(MotorPin,OUTPUT);

}

void loop() {
    
  // put your main code here, to run repeatedly:
  // Serial.println(digitalRead(SensorPin));
  if(digitalRead(SensorPin)){ 
    if(MotorDurum == HIGH){
      MotorDurum = LOW;
    }
    else{
      MotorDurum = HIGH;
    }
    digitalWrite(MotorPin,MotorDurum);
  }
  // digitalWrite(MotorPin,HIGH);
  delay(100);
}
