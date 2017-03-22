#include "player.h"


void player::setup() {
	//references pointers
	//img = _img;
	//boy = _boy;
	
	boy.load("images/player/boy.png");
}


void player::draw(float _x, float _y) {
	//draws the Hero and keeps its original colour
	x = _x;
	y = _y;
	ofSetColor(255);
	//boy->draw(x, y, 90, 50);
	boy.draw(x, y);
}

