#include <SFML/Graphics.hpp>
#include "Object.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Lab1");

	Object object(300,300,sf::Color::Blue);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		object.draw(window);
		window.display();
	}

	return 0;
}