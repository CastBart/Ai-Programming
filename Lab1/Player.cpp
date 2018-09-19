#include "Player.h"



Player::Player(sf::Vector2f velocity)
	:m_object(300, 500, sf::Color::Yellow, velocity)
{
	
}


Player::~Player()
{
}

void Player::update()
{
	move();
}

void Player::draw(sf::RenderWindow & window)
{
	m_object.draw(window);

}

void Player::move()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		
	}
}
