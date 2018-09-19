#include "Game.h"

// Updates per millisecond
const sf::Int32 Game::s_MS_PER_UPDATE = 10.0;

/// <summary>
/// @brief Game Constructor.
/// 
/// Initializes all member variables
/// </summary>
Game::Game()
	: m_window()
{

}

/// <summary>
/// @brief Game destructor.
/// 
/// Removes all member variables off the stack
/// </summary>
Game::~Game()
{
}

/// <summary>
/// @brief Game initializer.
/// 
/// 
/// </summary>
void Game::init()
{
	//create a seed
	srand(time(nullptr));

	// This all the available 
	std::vector<sf::VideoMode> modes = sf::VideoMode::getFullscreenModes();


	sf::Uint32 screenWidth = static_cast<sf::Uint32>(800);
	sf::Uint32 screenHeight = static_cast<sf::Uint32>(600);

	// Define window settings
	sf::ContextSettings windowSettings = sf::ContextSettings();
	windowSettings.antialiasingLevel = 4u;

	m_window.create(sf::VideoMode(screenWidth, screenHeight), "Lab 1", sf::Style::Default, windowSettings);

	m_window.setVerticalSyncEnabled(true);


}

/// <summary>
/// @brief Implements the main game loop: handle windows system events, then update and render everything.
/// 
/// The update loop runs at a different FPS than the draw loop,
/// with the priority for the update loop, thus if the PC is too slow, 
/// we keep the updates but draw less frames.
/// </summary>
void Game::run()
{
	sf::Clock clock;
	sf::Int32 lag = 0;
	sf::Time dt = sf::Time::Zero;

	float randX, randY;
	srand(time(NULL));

	randX = ((double)rand()) / ((double)RAND_MAX) * 2 + (-1);
	randY = ((double)rand()) / ((double)RAND_MAX) * 2 + (-1);


	sf::Vector2f randVel(randX, randY);
	Object object(300, 300, sf::Color::Blue, randVel);

	while (m_window.isOpen())
	{
		dt = clock.restart();
		lag += dt.asMilliseconds();
		processEvents();
		while (lag > s_MS_PER_UPDATE)
		{
			update();
			lag -= s_MS_PER_UPDATE;
		}
		update();
		render(static_cast<double>(dt.asMilliseconds()));
	}
}

/// <summary>
/// @brief Processes the SFML window events.
/// 
/// </summary>
void Game::processEvents()
{
	sf::Event event;

	while (m_window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			m_window.close();
			break;
		case sf::Event::KeyPressed:
			break;
		case sf::Event::KeyReleased:
			break;
		default:
			break;
		}
	}
}

/// <summary>
/// @brief top level game update logic.
/// 
/// Updates relevant systems based on current Game State
/// </summary>
void Game::update()
{

	
}

/// <summary>
/// @brief top level game rendering logic.
/// 
/// </summary>
/// <param name="ms">time since last render, in milliseconds</param>
void Game::render(double ms)
{
	
	m_window.display();
}


