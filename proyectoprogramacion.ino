#include <Servo.h>

#define pinBase 12//Defino el pin de la base

Servo motorBase;//Declaro el motor de la base

void setup() {
  motorBase.attach(pinBase);
  motorBase.write(0);
  delay(2000);//Espera 2 seg
  motorBase.write(180);
  delay(2000);//Espera 2 seg
  motorBase.write(90);
  delay(2000);//Espera 2 seg
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
