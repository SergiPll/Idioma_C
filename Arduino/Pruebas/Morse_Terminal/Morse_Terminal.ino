/*
----PROGRAMA DISEÑADO PARA UN ESP8266 CON EL PIN 2 PARA EL LED----

Programa inacabado

*/
#include <stdio.h>

#define LED_PIN 2

String texto, morse;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Introduce una palabra:");
}

void loop() {
  if (Serial.available() > 0) {
    texto = Serial.readString();
    morse = texto2Morse(texto);
    for (unsigned int i = 0; i < morse.length(); i++) {
      Serial.println(morse[i]);
      if(morse[i] == '.')
        punto();
      else if(morse[i] == '-')
        raya();
      else pausa();
    }
  }
  delay(5);
}

/* -- FUNCIONES AUXILIARES --*/
String texto2Morse(String texto) {
  String morse = "";
  for (unsigned int i = 0; i < texto.length(); i++)
    morse += letra2morse(toupper(texto[i])) + " ";
  Serial.println("Morse: " + morse);
}

String letra2morse(char letra) {
    switch(letra) {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
        default: " ";
    }
}

void punto() {
  digitalWrite(LED_PIN, HIGH);
  delay(250);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}

void raya() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}

void pausa() {
  delay(500);
}
