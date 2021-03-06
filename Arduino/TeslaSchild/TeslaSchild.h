/*
 * TeslaSchild.h
 *
 *  Created on: 11.02.2016
 *      Author: Oliver
 */

#ifndef TeslaSchild_H_
#define TeslaSchild_H_
#include <Adafruit_NeoPixel.h>

class TeslaSchild {
public:
	TeslaSchild(Adafruit_NeoPixel strip);
	virtual ~TeslaSchild();

	void init();
	void setup();

	void drawWheel(int step);
	void drawWheelColorful(int millies);
	void drawWheelRed(int millies);
	void drawWheelBlue(int millies);
	void drawLauflichtRandomColor(int millies);
	void drawRandomSegment(int millies, int modulo);
	void drawRandomSegmentUSA(int millies, int modulo);
	void drawDoubleLauflichtWheeled(int millies);

	void drawBarGraphWheeledColorfull(int millies);
	void drawBarGraphWheeled(int millies);
	int max;
	int delta = 1;
	int ms = 0;
	bool animating;
	int animationStep;
	int anzLetters = 11;

	int lauflichtStep = 0;
	int lauflichtStep2 = 0;
	uint32_t laufLichtColor;

	uint32_t getColorForLetter(int index);
	uint32_t getColorForStripIndex(int index);
	uint32_t getRandomColor(int brightness);
	uint32_t getColorRotGelbGruen(int brightness);
	uint32_t getColorRotBlauWeiss(int color);
	uint32_t Wheel(byte WheelPos);
	uint32_t getColorWhite(int brightness);
	uint32_t getColorRed(int brightness);

private:
	Adafruit_NeoPixel strip;

};

#endif
