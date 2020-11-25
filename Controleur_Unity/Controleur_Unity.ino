//https://www.gotronic.fr/art-module-lecteur-rfid-125-khz-113990042-21511.htm
//fonctionnement avec tags capsules sous cutannés
//https://coolcomponents.co.uk/products/rfid-glass-capsule-125khz
// Alimentation entre 3 et 5 V, resistance 470R en série avec la bobine (HEF4051 =350R typique / 5V)

//RFID
#include "RFID.cpp"

// Ecran
#include <Wire.h>
#include <Adafruit_SSD1306.h>
//Anneau lumière
#include <Adafruit_NeoPixel.h>

//Ecran
#define OLED_RESET 4
Adafruit_SSD1306 display( OLED_RESET );

// PIN de connexion
#define PIN 6 
// Nombre de NeoPixels
#define NUMPIXELS 24 

//nombre pixels, PIN connexion
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
unsigned long Tag=0;

//Début prog
void setup()
{
  Serial.begin(115200);
  pinMode(RFID_EN, OUTPUT);
  digitalWrite(RFID_EN, LOW);

  // Initialise la communication I²C à l'adresse 0x3C.
  display.begin( SSD1306_SWITCHCAPVCC, 0x3C );
  display.clearDisplay();

  pixels.begin(); // Initialise Neopixel
  pixels.setBrightness(50);
}


void loop()
{  
  Tag = RFIDscan();
  
  Serial.println(Tag);
 
  // Affiche des textes
  afficheTextes();

  //
  FigurineOrNot();
  
 
}
