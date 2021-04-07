/*
----PROGRAMA DISEÑADO PARA UN ESP8266 CON EL PIN 2 PARA EL LED----

Este programa cambiará el estado del Led a apagado o encendido

En caso de quue se quiera cambiar la velocidad, cambiar el delay.
*/
#include <stdio.h>

#define LED_PIN 2

void setup() {
  
pinMode(LED_PIN, OUTPUT);
}

void loop() {
  delay(36);
  digitalWrite(LED_PIN,HIGH);
  delay(36);
  digitalWrite(LED_PIN,LOW);
}
