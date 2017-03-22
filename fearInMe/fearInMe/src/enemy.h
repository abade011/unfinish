#pragma once

#ifndef enemy_h
#define enemy_h

#include "ofMain.h"

class enemy
{
public:
	enemy();
	void setup();
	void draw(float _x, float _y);
	void update();
	float x;
	float y;
	float speedX;
	float speedY;
	float directionX, directionY;

};

#endif /* enemy_hpp */