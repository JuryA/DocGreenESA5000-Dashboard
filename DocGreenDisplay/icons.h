#pragma once

//converted using the conversion script from adafruit
// https://github.com/adafruit/Adafruit_SSD1306/blob/master/scripts/make_splash.py

#define BEAM_WIDTH 32
#define BEAM_HEIGHT 32
const uint8_t PROGMEM beam_bitmap[] = {
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B11111110,B00000000,
  B00000000,B11100001,B11111111,B10000000,
  B00000011,B11100011,B10000011,B11100000,
  B00001111,B11000111,B00000000,B11110000,
  B00011111,B00000110,B00000000,B00111000,
  B01111100,B01001110,B00000000,B00011100,
  B11110001,B11101100,B00000000,B00001110,
  B00000111,B11001100,B00000000,B00000110,
  B00011111,B00001100,B00000000,B00000111,
  B01111100,B01001100,B00000000,B00000011,
  B11110001,B11101100,B00000000,B00000011,
  B01000111,B11001100,B00000000,B00000011,
  B00011111,B00001100,B00000000,B00000111,
  B01111100,B00001100,B00000000,B00000110,
  B11110001,B11101110,B00000000,B00001110,
  B11000111,B11000110,B00000000,B00011100,
  B00011111,B00000111,B00000000,B01111000,
  B01111100,B00000111,B00000001,B11110000,
  B11110000,B11100011,B11111111,B11000000,
  B11000011,B11000001,B11111111,B00000000,
  B00001111,B10000000,B00010000,B00000000,
  B00111110,B00000000,B00000000,B00000000,
  B11111000,B00000000,B00000000,B00000000,
  B11100000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
};

#define SCOOTER_WIDTH 32
#define SCOOTER_HEIGHT 32
const uint8_t PROGMEM scooter_bitmap[] = {
  B00000000,B00000000,B00000000,B00000000,
  B00000011,B00000000,B00000000,B00000000,
  B00001111,B10000000,B00000000,B00000000,
  B00001000,B11000000,B00000000,B00000000,
  B00001111,B01000000,B00000000,B00000000,
  B00000101,B01000000,B00000000,B00000000,
  B00000111,B01000000,B00000000,B00000000,
  B00000001,B01000000,B00000000,B00000000,
  B00000001,B00000000,B00000000,B00000000,
  B00000010,B10000000,B00000000,B00000000,
  B00000010,B10000000,B00000000,B00000000,
  B00000000,B10000000,B00000000,B00000000,
  B00000000,B00000000,B00000000,B00000000,
  B00000101,B00000000,B00000000,B00000000,
  B00000101,B00000000,B00000000,B00000000,
  B00000101,B00000000,B00000000,B00000000,
  B00000101,B00000000,B00000000,B00000000,
  B00001010,B00000000,B00000000,B00000000,
  B00001010,B00000000,B00000000,B00000000,
  B00001010,B00000000,B00000000,B00000000,
  B00001010,B00000000,B00000000,B00000000,
  B00010111,B00000000,B00000000,B00000000,
  B00010100,B10000000,B00000000,B00000000,
  B00110110,B01000000,B00000000,B00111000,
  B11110111,B01100000,B00000000,B11000110,
  B01101011,B10100000,B00000001,B00111010,
  B01101101,B01010000,B00000011,B01000101,
  B10101101,B01101111,B11111111,B11110111,
  B10111111,B00111000,B00000000,B00010100,
  B01000100,B00000111,B11111001,B11100100,
  B01111000,B00000000,B00000000,B01111000,
  B00000000,B00000000,B00000000,B00000000,
};