#ifndef player_h
#define player_h

#include "ofMain.h"

//Hero variables and functions
class player {
public:
	void setup();
	void draw(float _x, float _y);
	float x;
	float y;

	ofImage boy;
};

#endif /* player_hpp */

