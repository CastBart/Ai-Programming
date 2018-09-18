#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
class Object
{
public:
	Object(float x, float y,sf::Color color);
	~Object();
	void draw(sf::RenderWindow& window);
	void update();

private:
	sf::Vector2f m_position;
	sf::Vector2f m_velocity;
	sf::Sprite m_sprite;
	sf::Texture m_texture;
	sf::RectangleShape m_rect;
};

