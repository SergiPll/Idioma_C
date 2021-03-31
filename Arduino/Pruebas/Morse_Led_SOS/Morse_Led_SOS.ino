/*
----PROGRAMA DISEÑADO PARA UN ESP8266 CON EL PIN 2 PARA EL LED----

Este programa cambiará el estado del Led a apagado o encendido

El Led se encenderá con un patrón que representa el SOS en código morse
*/
#include <stdio.h>

#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);

}

void loop() {
    corto();
    largo();
    corto();
    delay(1200);
}

void corto() {
    digitalWrite(LED_PIN,LOW);
    delay(120);
    digitalWrite(LED_PIN,HIGH);
    delay(120);
    digitalWrite(LED_PIN,LOW);
    delay(120);
    digitalWrite(LED_PIN,HIGH);
    delay(120);
    digitalWrite(LED_PIN,LOW);
    delay(120);
    digitalWrite(LED_PIN,HIGH);
    delay(200);
    
}

void largo() {
    digitalWrite(LED_PIN,HIGH);
    delay(550);
    digitalWrite(LED_PIN,LOW);
    delay(350);
    digitalWrite(LED_PIN,HIGH);
    delay(550);
    digitalWrite(LED_PIN,LOW);
    delay(350);
    digitalWrite(LED_PIN,HIGH);
    delay(550);
    digitalWrite(LED_PIN,LOW);
    delay(350);
    digitalWrite(LED_PIN,HIGH);
    delay(600);
}
