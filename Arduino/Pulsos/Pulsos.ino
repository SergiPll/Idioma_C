/*
----PROGRAMA DISEÑADO PARA UN ESP8266 CON EL PIN 2 PARA EL LED----

Este programa enviará pulsos para encender y apagar el Led poco a poco

En caso de quue se quiera cambiar la velocidad, cambiar el delay en el método escribir()
*/
#include <stdio.h>

#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);

}

void loop() {

    
    for (int PWM_duty = 0; PWM_duty < 1100; PWM_duty++) 
    {
      escribir(PWM_duty);
    }
    delay(1);
    for (int PWM_duty = 1100; PWM_duty >= 0; PWM_duty--) 
    {
      escribir(PWM_duty);
    }
    delay(1);

}

void escribir(int PWM_duty) {
    analogWrite(LED_PIN, PWM_duty);
    delay(2);
}
