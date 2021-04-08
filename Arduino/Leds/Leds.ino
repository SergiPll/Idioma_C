/*
----PROGRAMA DISEÑADO PARA UN ESP8266----

Este programa hará cambiar de color la tira de Leds entre 3 colores distintos de la siguiente forma:
- Se encienden en orden del primero al ultimo.
- Cuando llegue al ultimo, en lugar de encenderse, cambiarán de color de la misma forma.

En caso de quue se quiera cambiar la velocidad, cambiar el delay
*/
#include <Adafruit_NeoPixel.h>//Incluimos la librería en el código

// Pin del Arduino al cual conectamos el DIN del primer led en la cadena
#define PIN        D5 

// Número de leds encadenados
#define NUMLEDS 7 //Modifica este número según el arreglo de LEDs con el que cuentes

#define DELAY 55 //tiempo de espera en ms 

// Inicializamos nuestro objeto "leds"
Adafruit_NeoPixel leds(NUMLEDS, PIN, NEO_GRB + NEO_KHZ800);
// Argumento 1 = Número de leds encadenados
// Argumento 2 = Número del pin de Arduino utilizado con pin de datos
// Argumento 3 = Banderas de tipo de led:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Leds are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Leds are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Leds are wired for RGBW bitstream (NeoPixel RGBW products)



void setup() {
  leds.begin(); // Inicializamos el objeto "leds"
  leds.clear();
}

void loop() {
//  leds.clear(); // Apagamos todos los LEDs

  // El primer led de una cadena es el #0, el segundo es el #1, y así sucesivamente
  // hasta el numero de leds menos uno
  for(int i=0; i<NUMLEDS; i++) { // Para cada led...

    
    // Modificamos el LED #i, encendiendolo con el color designado
    leds.setPixelColor(i, leds.Color(255, 255, 255));

    leds.show();   // Mandamos todos los colores con la actualización hecha

    delay(DELAY); // Pausa antes de modificar el color del siguiente LED
    
  }

  for(int i=0; i<NUMLEDS; i++) { // Para cada led...

    
    // Modificamos el LED #i, encendiendolo con el color designado
    leds.setPixelColor(i, leds.Color(0, 70, 176));

    leds.show();   // Mandamos todos los colores con la actualización hecha

    delay(DELAY); // Pausa antes de modificar el color del siguiente LED
    
  }

  for(int i=0; i<NUMLEDS; i++) { // Para cada led...

    
    // Modificamos el LED #i, encendiendolo con el color designado
    leds.setPixelColor(i, leds.Color(173, 0, 0));

    leds.show();   // Mandamos todos los colores con la actualización hecha

    delay(DELAY); // Pausa antes de modificar el color del siguiente LED
    
  }
}
