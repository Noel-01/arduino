#include<Servo.h>

Servo servo;
int pos = 0;

void setup() {
  servo.attach(3);
}

void loop() {
  
  for(pos=0; pos<=180; pos++) {
    servo.write(pos);
    delay(10);
  }

  for(pos=180; pos>=0; pos--) {
    servo.write(pos);
    delay(10);
  }

}
