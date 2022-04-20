
#include <Servo.h>
#define PIN_LED 4 //este no lo voy a usar
#define PIN_MOT 5

Servo mot;

void setup() {
  Serial.begin(9600);
  delay(30);
  mot.attach(PIN_MOT);
  mot.write(0);
}

int vmot=0;
String cad;

void loop() {

  if(Serial.available()){
    cad = Serial.readString();
    vmot = cad.toInt();
    cad = cad + "-soy la tarjeta";
    Serial.println(cad);
  }
  
  mot.write(vmot);

}
