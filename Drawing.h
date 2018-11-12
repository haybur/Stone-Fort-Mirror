// Drawing.h

//void addSparkles(int sparkStart, int sparkEnd, uint8_t freq, double multiplierAdjustment, int additionAdjustment, CHSV sparkleColor) {
//
//	if (freq > 0 && freq < 15) {
//		sparkleNumber = spectrumValue[freq] + additionAdjustment;
//		sparkleNumber = constrain(sparkleNumber, 0, 500);
//		sparkleNumber = map(sparkleNumber, 0, 500, 0, max_num_of_sparkles);
//
//		for (int i = 0; i < sparkleNumber; i++) {
//			leds[getRandomPixel(sparkStart, sparkEnd)] = sparkleColor;
//		}
//	}
//	else {
//		EVERY_N_MILLISECONDS(additionAdjustment) {
//			leds[getRandomPixel(sparkStart, sparkEnd)] = sparkleColor;
//		}
//	}
//	//LEDS.show();
//}