#pragma once
#include "Object.h"
class Player
{
public:
	Player(sf::Vector2f velocity);
	~Player();
	void update();
	void draw(sf::RenderWindow& window);
private:
	Object m_object;
	void move();
};

