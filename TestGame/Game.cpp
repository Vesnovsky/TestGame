#include "Game.h"



Game::Game()
	:window(sf::VideoMode(1000,700), "CoolGame", sf::Style::Default),
	btnStart(sf::Vector2f(300.f, 550.f), "start.png"),
	btnStop(sf::Vector2f(600.f, 550.f), "stop.png")
{
	
	window.setFramerateLimit(60);
	
	srand(time(NULL));
	
	if (!font.loadFromFile("font.ttf"))
	{
		// error...
	}

	txtScore.setFont(font);
	txtScore.setString("SCORE");
	txtScore.setCharacterSize(50);
	txtScore.setColor(sf::Color::Black);
	txtScore.setPosition(0, 550);


	txtPoints.setFont(font);
	txtPoints.setString(std::to_string(quantityPoints));
	txtPoints.setCharacterSize(50);
	txtPoints.setColor(sf::Color::Black);
	txtPoints.setPosition(0, 600);


	playingField.setPrimitiveType(sf::Quads);
	playingField.resize(4);

	playingField[0].position = sf::Vector2f(64.f, -64.f);
	playingField[1].position = sf::Vector2f(946.f, -64.f);
	playingField[2].position = sf::Vector2f(946.f, 470.f);
	playingField[3].position = sf::Vector2f(64.f, 470.f);

	playingField[0].color = sf::Color::White;
	playingField[1].color = sf::Color::White;
	playingField[2].color = sf::Color::White;
	playingField[3].color = sf::Color::White;
	

	bool playing = false;

}

void Game::run()
{
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			window.setActive(true);
			if (event.type == sf::Event::Closed)
				window.close();
			if (btnStart.buttonClicked(event, sf::Mouse::getPosition(window))) {
				playing = true;
				quantityPoints = 0;
				txtPoints.setString(std::to_string(quantityPoints));
			}
			if (btnStop.buttonClicked(event, sf::Mouse::getPosition(window)))
				playing = false;

		}
		if(playing) {
	
			for (int i = 0; i < pointArray.size(); i++) {
				pointArray[i].update();
				if (pointArray[i].pointClicked(event, sf::Mouse::getPosition(window))) {

					pointArray.erase(pointArray.begin() + i);
					quantityPoints++;
					txtPoints.setString(std::to_string(quantityPoints));
				}
				else if (!playingField.getBounds().contains(pointArray[i].getPosition()))
				{
					pointArray.erase(pointArray.begin() + i);
				}
			}

			float time = eps.getElapsedTime().asSeconds();
			if (eps.getElapsedTime().asSeconds() > (0.5 + rand() % 3))
			{
				eps.restart();
				Point point(sf::Vector2f(300 + rand() % 1680, -64),
					(sf::Color((1 + rand() % 255), (1 + rand() % 255), (1 + rand() % 255), 255)),
					sf::Vector2f(0, (0.5f + rand() % 3)),std::string("Point.png"));
				pointArray.push_back(point);
			}
		}else { 
			pointArray.clear();
		}

		window.clear(sf::Color::White);

		

		window.draw(playingField);

		window.draw(txtScore);
		window.draw(txtPoints);

		window.draw(btnStart);
		window.draw(btnStop);

		for (auto& pnt : pointArray)
			window.draw(pnt);

		window.display();
	}
}


