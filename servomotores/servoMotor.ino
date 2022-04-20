#include<Servo.h>

Servo servo;


void setup() {
  Serial.begin(9600);
  servo.attach(3);

}

void loop() {
  
  servo.write(0);
  
  if(Serial.available()>0){

    char entrada = Serial.read();
    
    if(entrada == 'i'){
      servo.write(90);
      Serial.println("90 grados");
      delay(2000);
    }
    
    if(entrada == 'd'){
      servo.write(180);
      Serial.println("180 grados");
      delay(2000);
    }

     if(entrada == 't'){
      servo.write(270);
      Serial.println("270 grados");
      delay(2000);
    }

    Serial.flush();
  }

 //if(Serial.availableForWrite()>0){
    //Serial.print("hola");
//  }
  
  //servo.write(0);
  //delay(2000);
  //servo.write(90);
  //delay(2000);
  //servo.write(180);
  //delay(2000);

}
