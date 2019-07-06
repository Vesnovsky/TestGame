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
	Game();
	void run();
private:
	sf::RenderWindow window;

	unsigned short quantityPoints = 0;
	sf::Font font;
	sf::Text txtScore, txtPoints;
	sf::Texture btnTexture;

	Button btnStart;
	Button btnStop;

	std::vector<Point> pointArray;
	sf::Clock eps;
	sf::VertexArray playingField;

	bool playing = false;
};
#endif#

