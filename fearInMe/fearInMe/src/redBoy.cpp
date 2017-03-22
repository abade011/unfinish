#include "redBoy.h"
#include "enemy.h"



redBoy::redBoy() : enemy()
{
	
}

void redBoy::setup()
{

	enemyOne.load("images/enemy/enemyBoy.png");
}

void redBoy::draw(float _x, float _y)
{
	x = _x;
	y = _y;

	ofSetColor(255);
	enemyOne.draw(x, y);
}

void redBoy::update()
{
}

