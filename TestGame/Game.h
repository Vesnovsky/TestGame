#ifndef GAME
#define GAME
#include <SFML/Graphics.hpp>
#include"Button.h"
#include"Point.h"
#include<iostream>
#include<ctime>
#include<vector>
#include<string>
class Game
{
public:
	static Game& getInstance();
	void run();

private:
	Game();

	sf::RenderWindow window;
	sf::Clock eps;

	unsigned short quantityPoints = 0;
	bool playing = false;

	sf::Font font;
	sf::Text txtPoints;
	sf::Text txtScore;
	sf::Texture btnTexture;

	sf::VertexArray playingField;

	Button btnStart, btnStop;

	std::vector<Point> pointArray;
	
	

	
};
#endif#

