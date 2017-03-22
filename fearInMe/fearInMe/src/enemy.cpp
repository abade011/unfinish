#include "enemy.h"

enemy::enemy()
{
	directionX = x + 1;
	directionY = y + 1;
}

void enemy::setup()
{
	//set at random positioning
	x = ofRandom(800, 8000);
	y = ofRandom(0, 320);

	//set at random speeds
	speedX = ofRandom(1, 3);
	speedY = ofRandom(-1, 1);
	
}

void enemy::draw(float _x, float _y)
{
	x = _x;
	y = _y;

	ofSetColor(255);

}

void enemy::update()
{

	//conditions for when enemies go off screen
	if (x>-100) {
		x -= speedX*directionX;
		y -= speedY*directionY;


	}
	if (x<-100) {
		x = ofRandom(800, 1500);
		y = ofRandom(0, 300);

	}

	//will bounce back enemies from top and bottom airspace
	if (y>310 || y<0) {
		directionY = directionY*-1;

	}
}
