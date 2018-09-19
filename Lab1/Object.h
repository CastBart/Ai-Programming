#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
class Object
{
public:
	Object(float x, float y,sf::Color color, sf::Vector2f velocity);
	~Object();
	void draw(sf::RenderWindow& window);
	void update();
	float vectorLen(sf::Vector2f vec);
	sf::Vector2f normVector(sf::Vector2f vec);
	void borders(sf::RenderWindow& window);

private:
	sf::Vector2f m_position;
	sf::Vector2f m_velocity;
	sf::Sprite m_sprite;
	sf::Texture m_texture;
	sf::RectangleShape m_rect;
};

