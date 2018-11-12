//#pragma once

//typedef void(*ambientPatternList[])();
//ambientPatternList ambientPatterns = {
//	ambient_rainbow,
//	ambient_rainbowFade,
//	ambient_confetti,
//	coordinates,
//	movingColorsToBeat
//};
//
//typedef void(*musicWithNoBeatPatternsList[])();
//musicWithNoBeatPatternsList musicWithNoBeatPatterns = {
//	sixFreqGlitter,
//	sixFreqGlitter_usa
//};
//// Both high frequency beats and low frequency beats are being detected
//typedef void(*spectrumPatternList[])();
//spectrumPatternList spectrumPatterns = {
//	travelingDotsToHighAndLow,
//	sixFreqGlitter,
//	coordinatesToBeatExperimental,
//	beatMeter
//};
//// Only beats in the low frequency are being detected
//typedef void(*lowBeatPatternList[])();
//lowBeatPatternList lowBeatPatterns = {
//	travelingDotsToLowBeats,
//	coordinatesToBeat,
//	bouncingZack_withFade,
//	coordinatesToBeatExperimental,
//	circle_midOut_One,
//	bouncingZack_withoutFade,
//	//circle_midOut_One_Experimental,
//	circle_midOut_One_Set_Color
//};

//void nextMusicWithNoBeatPattern() {
//	// add one to the current pattern number, and wrap around at the end
//	musicWithNoBeatPatternNumber = random8(ARRAY_SIZE(musicWithNoBeatPatterns));
//}
//
//void nextAmbPattern() {
//	//currentAmbPatternNumber = (currentAmbPatternNumber + 1) % ARRAY_SIZE(ambientPatterns);
//	currentAmbPatternNumber = random8(ARRAY_SIZE(ambientPatterns));
//}
//
//void nextLowBeatPattern() {
//	//currentLowBeatPatternNumber = (currentLowBeatPatternNumber + 1) % ARRAY_SIZE(lowBeatPatterns);
//	currentLowBeatPatternNumber = random8(ARRAY_SIZE(lowBeatPatterns));
//}
//
//void nextSpectrumPattern() {
//	//currentSpectrumPatternNumber = (currentSpectrumPatternNumber + 1) % ARRAY_SIZE(spectrumPatterns);
//	currentSpectrumPatternNumber = random8(ARRAY_SIZE(spectrumPatterns));
//}