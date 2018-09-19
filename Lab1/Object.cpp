#include "Object.h"



Object::Object(float x, float y, sf::Color color, sf::Vector2f velocity)
	: m_position(x,y)
	, m_rect(sf::Vector2f(60,60))
	, m_velocity(velocity)
{
	m_rect.setFillColor(color);
	m_rect.setPosition(m_position);
	m_velocity = normVector(velocity);
}


Object::~Object()
{
}

void Object::draw(sf::RenderWindow & window)
{
	window.draw(m_rect);
	borders(window);
}

void Object::update()
{
	m_velocity = 
	m_position += m_velocity;
	m_rect.setPosition(m_position);
}

float Object::vectorLen(sf::Vector2f vec)
{
	return std::sqrt(vec.x * vec.x + vec.y * vec.y);
}

sf::Vector2f Object::normVector(sf::Vector2f vec)
{
	float len = vectorLen(vec);
	if (len != 0)
	{
		vec.x = vec.x / len;
		vec.y = vec.y / len;
	}
	return vec;
}

void Object::borders(sf::RenderWindow & window)
{
	if (m_position.x <= 0)
	{
		m_position.x = window.getSize().x;
	}

	if (m_position.x >= window.getSize().x)
	{
		m_position.x = 0;
	}

	if (m_position.y <= 0)
	{
		m_position.y = window.getSize().y;
	}

	if (m_position.y >= window.getSize().y)
	{
		m_position.y = 0;
	}
}
