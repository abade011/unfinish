#pragma once

#ifndef redBoy_h
#define redBoy_h

#include "ofMain.h"
#include "enemy.h"

class redBoy : public enemy
{
public:
	redBoy();
	void setup();
	void draw(float _x, float _y);
	void update();
	float x;
	float y;
	ofImage enemyOne;

};

#endif /* redBoy_h */
