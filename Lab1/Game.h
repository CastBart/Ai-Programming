#ifndef GAME_H
#define GAME_H

#include "SFML\Graphics.hpp"
#include <time.h>

#include "Object.h"



class Game
{
public:
	Game();
	~Game();
	void init();
	void run();
private:
	void processEvents();
	void update();
	void render(double ms);

	// update per milliseconds
	static const sf::Int32 s_MS_PER_UPDATE;

	// SFML main game window
	sf::RenderWindow m_window;

};

#endif // !GAME_H

