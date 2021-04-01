/*
----PROGRAMA DISEÑADO PARA UN ESP8266 CON EL PIN 2 PARA EL LED----

Este programa cambiará el estado del Led a apagado o encendido

Lo hará usando valores random
*/
#include <stdio.h>

#define LED_PIN 2

int num;

void setup() {
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
  num = random(100);
  if (num <= 90) {
    digitalWrite(LED_PIN,HIGH);
  }
  else {
    digitalWrite(LED_PIN,LOW);
  }
  delay(35); 
}
