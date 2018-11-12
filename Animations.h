//// Animations.h

void addSparkles(int sparkStart, int sparkEnd, uint8_t freq, double multiplierAdjustment, int additionAdjustment, int hue, bool white) {
	// If sparkles are being added to react to music, do this:

	// If the freq argument is a valid FFT bin, 0 - 15
	if (freq > 0 && freq < 15) {
		// Apply addition adjustment. This changes who 
		sparkleNumber = spectrumValue[freq] + additionAdjustment;
		sparkleNumber = constrain(sparkleNumber, 0, 500);
		sparkleNumber = map(sparkleNumber, 0, 500, 0, max_num_of_sparkles);

		for (int i = 0; i < sparkleNumber * multiplierAdjustment; i++) {
			//leds[getRandomPixel(sparkStart, sparkEnd)] = sparkleColor;
			int pos = getRandomPixel(sparkStart, sparkEnd);
			leds[pos] = ColorFromPalette(currentPalette, hue, brightness, LINEARBLEND);
			if (white) leds[pos] = CHSV(0, 0, brightness);
			fadeValue = fadeValue + sparkleNumber*.1;
		}
	}
	// Else, if sparkles are being added as an ambient effect, do this:
	else {
		EVERY_N_MILLISECONDS(additionAdjustment) {
			int pos = getRandomPixel(sparkStart, sparkEnd);
			leds[pos] = CHSV(hue, 255, brightness);
			if (white) leds[pos] = CHSV(0, 0, brightness);
		}
	}
}

void confetti() {
	
		if (initiate) {
			colorOne = random8(0, 64);
			colorTwo = random8(128, 192);
			brightness = 255;
			max_num_of_sparkles = 25;  // old 14
			currentPalette = normal_p;
			changingHue = true;
			initiate = false;
		}
		
		addSparkles(cor0,  cor14, 2, 1.9, -50, random8(0, 10) + hue, false);
		addSparkles(cor14, cor28, 12, 1.9, -50, random8(150, 210) + hue, false);
		addSparkles(cor0, cor28, 8, 1, -200, 0, true);
		//addSparkles(cor0, cor28, 25, 1.9, 100, 96, false);
	
		fadeAll(250);
	}

void confettiFull() {
	if (initiate) {
		brightness = 255;
		max_num_of_sparkles = 25;  // old 14
		currentPalette = normal_p;
		changingHue = false;
		initiate = false;
	}

	addSparkles(cor0, cor28, 1, .2, -50, 0, false);
	addSparkles(cor0, cor28, 2, .2, -50, 0, false);
	addSparkles(cor0, cor28, 3, .2, -50, 21, false);
	addSparkles(cor0, cor28, 4, .1, -50, 42, false);
	addSparkles(cor0, cor28, 5, .1, -50, 62, false);
	addSparkles(cor0, cor28, 6, .1, -50, 85, false);
	addSparkles(cor0, cor28, 7, .1, -50, 106, false);
	addSparkles(cor0, cor28, 8, .1, -50, 128, false);
	addSparkles(cor0, cor28, 9, .1, -50, 150, false);
	addSparkles(cor0, cor28, 10, .1, -50, 171, false);
	addSparkles(cor0, cor28, 11, .2, -50, 192, false);
	addSparkles(cor0, cor28, 12, .3, -50, 213, false);

	fadeAll(254 - fadeValue);
	fadeValue = constrain(fadeValue - 2, 0, 20);
}

void sixFreqGlitter() {
	if (initiate) {
		brightness = 255;
		max_num_of_sparkles = 25;
		currentPalette = normal_p;
		changingHue = false;
		initiate = false;
	}

	//addSparkles(cor9, cor13, 2, .2, -50, 0, false);
	//addSparkles(cor1, cor9,  4, .1, -50, 64, false);
	//addSparkles(cor13, cor15, 6, .2, -50, 128, false);
	//addSparkles(cor27, cor28, 6, .2, -50, 128, false);
	//addSparkles(cor0, cor1, 6, .2, -50, 128, false);
	//addSparkles(cor19, cor27, 10, .1, -50, 192, false);
	//addSparkles(cor15, cor19, 12, .1, -50, 240, false);

	// This section makes the middle the low frequency and the outside squares the high frequency
	addSparkles(cor9, cor13, 12, .1, -50, 0, false);
	addSparkles(cor1, cor9, 8, .1, -50, 64, false);
	addSparkles(cor13, cor15, 2, .2, -50, 128, false);
	addSparkles(cor27, cor28, 2, .2, -50, 128, false);
	addSparkles(cor0, cor1, 2, .2, -50, 128, false);
	addSparkles(cor19, cor27, 8, .1, -50, 192, false);
	addSparkles(cor15, cor19, 12, .1, -50, 240, false);

	fadeAll(254 - fadeValue);
	fadeValue = constrain(fadeValue - 2, 0, 20);
}

void sixFreqGlitter_usa() {
	if (initiate) {
		brightness = 255;
		max_num_of_sparkles = 25;
		currentPalette = usa_p;
		changingHue = false;
		initiate = false;
	}
	sixFreqGlitter();
}

void ambientConfetti() {
	if (initiate) {
		changingHue = true;
		initiate = false;
	}

	addSparkles(cor0, cor28, 25, 1.9, 100, hue, false);
	Serial.println(hue);
	fadeAll(250);
}