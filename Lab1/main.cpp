#include <SFML/Graphics.hpp>
#include "Object.h"
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>
#include "Game.h"

//int main()
//{
//	sf::RenderWindow window(sf::VideoMode(800, 600), "Lab1");
//	float randX, randY;
//	srand(time(NULL));
//
//	randX = ((double)rand()) / ((double)RAND_MAX) * 2 + (-1);
//	randY = ((double)rand()) / ((double)RAND_MAX) * 2 + (-1);
//	
//
//	sf::Vector2f randVel(randX,randY);
//	Object object(300, 300, sf::Color::Blue, randVel);
//	while (window.isOpen())
//	{
//		sf::Event event;
//		while (window.pollEvent(event))
//		{
//			if (event.type == sf::Event::Closed)
//				window.close();
//		}
//
//		window.clear();
//		object.draw(window);
//		object.update();
//		window.display();
//	}
//
//	return 0;
//}

int main()
{
	Game game;
	game.init();
	game.run();

}