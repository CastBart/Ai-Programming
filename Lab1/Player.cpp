#include "Player.h"



Player::Player()
	:m_object(300,500,sf::Color::Yellow)
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
}

void Player::move()
{
	if(sf::Keyboard::key)
}
