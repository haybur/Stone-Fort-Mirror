Things to do:

CODE STRUCTURING
1. Rename animations that have weird names.
	- coordinatesToBeat is that way because when I got the coordinate system working, this function was the only one to utilize it
	- BouncingZack is that way because my friend Zack gave me the idea for this mode
2. Move all modes to the header file "Animations.h"
3. Have modes in "Animations.h" draw colors to LED strip by calling more basic functions in "Drawing.h" (similar to evilGeniusLabs' Torch project)

MUSIC ANALYTICS
1. The code should detect which low frequency bin, spectrumValue[0-3], contains the most defined/strong/constant beat profile, and then use that bin to drive animations.
2. Pattern recognition code should be implimented to learn a song so that if a beat pattern from earlier in the song returns, it can show the same mode as before.

HOW MODES REACT
1. Modes currently change every 10 seconds based on what the song does in the last 10 seconds. This should be updated so that the modes change based on what the song does
	- For example, the song begins with no beat but that first beat should show a new animation. Doesn't have to change modes entirely but it could show 1 growing circle
	- Beats dropping in and out of a song should trigger a mode change. If a constant beat is detected and goes on for a while, it should be ready to change when it drops out.

2. Allow modes to react to most active frequencies.
	- For modes that rely on a frequency in 1 beat (e.g. coordinatesToBeat()), allow the mode to react to a beat in any frequency that has a strong, constant beat that isn't too fast or too slow
		- Right now, these modes can only react to beats in the 3rd bin, which is most likely to have a song's low beat (spectrumValue[2])
	- For modes that react to multiple frequencies (e.g. sixFreqGlitter()), allow the mode to choose the most active low frequency bin, middle frequency bin, and high frequency bin.
3. Add single event animations. Not switching to an entire mode but a single sweep across, or a single circle (circle_mid_out())
4. The function beatTiming() figures out time passed between beats. If a beat pattern is repeated, modes that rely on speed should tailor themselves to the beat's speed.
	- In coordinatesToBeat, the sweep should complete it's sweep as the next beat is coming
SPECIFIC MODE IMPROVEMENTS
coordinatesToBeat() (all variations of this mode)
	- If sweep has slowed down to as slow as it goes, fade it out and display something else instead of having it go super slow for a while

sixFreqGlitter()
	- Within this mode, have a type of circle_mid_out() that just changes the colors of the glitter.

COLORING
The colors utilized in modes can be better tailored to the song's harmonies and most frequently used frequencies. I'm not sure how to impliment this yet.



MOONSHOT IDEAS
1. Create a GUI that makes it easy to map LEDs in any design and to easily assign animations based on music
2. When installing a this at a bar or club, have the sound system play a sample audio track that we provide so that our code can learn their volume level and set thresholds accordingly


