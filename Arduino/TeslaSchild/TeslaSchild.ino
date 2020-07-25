// This is a demonstration on how to use an input device to trigger changes on your neo pixels.
// You should wire a momentary push button to connect from ground to a digital IO pin.  When you
// press the button it will change to a new pixel animation.  Note that you need to press the
// button once to start the first animation!

#include <Adafruit_NeoPixel.h>

#include "TeslaSchild.h"

// Parameter 1 = number of pixels in strip,  neopixel stick has 8
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_RGB     Pixels are wired for RGB bitstream
//   NEO_GRB     Pixels are wired for GRB bitstream, correct for neopixel stick
//   NEO_KHZ400  400 KHz bitstream (e.g. FLORA pixels)
//   NEO_KHZ800  800 KHz bitstream (e.g. High Density LED strip), correct for neopixel stick

// 18 LEDs bei 144 Streifen
//  8 LEDs bei 60 Steifen
//

#define LED_COUNT  50


Adafruit_NeoPixel stripD6 = Adafruit_NeoPixel(LED_COUNT, 6, NEO_GRB + NEO_KHZ800);
TeslaSchild d6(stripD6);


int millies = 0;
int deltaMillies = 25;

void setup() {
	millies = 0;
	d6.setup();
}

void loop() {
	millies = millies + deltaMillies;

	if (millies >= 5000)
		millies = 0;

	drawTeslaSchild();
	delay(deltaMillies);

}

void drawTeslaSchild() {
//	d6.drawWheelColorful(millies);
//	d6.drawWheelRed(millies);
//	d6.drawWheelBlue(millies);
	d6.drawRandomSegmentUSA(millies, 4);
}

