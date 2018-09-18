#include "Object.h"



Object::Object(float x, float y, sf::Color color)
	: m_position(x,y)
	, m_rect(sf::Vector2f(20,20))
{
	m_rect.setFillColor(color);
	m_rect.setPosition(m_position);
}


Object::~Object()
{
}

void Object::draw(sf::RenderWindow & window)
{
	window.draw(m_rect);
}

void Object::update()
{
}
