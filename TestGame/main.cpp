#include"Game.h"

int main()
{
	Game game;
	game.run();
	/*sf::RenderWindow window(sf::VideoMode(1000, 800), "CoolGame");
	
	srand(time(NULL));
	unsigned short quantityPoints=0;
	sf::Font font;
	if (!font.loadFromFile("font.ttf"))
	{
		// error...
		//std::cout << "ERROR";
	}
	sf::Text txtScore;
	txtScore.setFont(font);
	txtScore.setString("SCORE");
	txtScore.setCharacterSize(60);
	txtScore.setColor(sf::Color::Black);
	txtScore.setPosition(0, 600);

	sf::Text txtPoints;
	txtPoints.setFont(font);
	txtPoints.setString(std::to_string(quantityPoints));
	txtPoints.setCharacterSize(60);
	txtPoints.setColor(sf::Color::Black);
	txtPoints.setPosition(0, 680);

	sf::Texture btnTexture;
	btnTexture.loadFromFile("Play.png");
	Button btnStart(sf::Vector2f(230.f,550.f), std::string("Play.png"));
	Button btnStop(sf::Vector2f(530.f, 550.f), std::string("Play.png"));

	std::vector<Point> pointArray;
	sf::Clock eps;
	sf::VertexArray playingField(sf::Quads,4);

	playingField[0].position = sf::Vector2f(100.f, 0.f);
	playingField[1].position = sf::Vector2f(900.f, 0.f);
	playingField[2].position = sf::Vector2f(900.f, 450.f);
	playingField[3].position = sf::Vector2f(100.f, 450.f);

	playingField[0].color = sf::Color::Black;
	playingField[1].color = sf::Color::Black;
	playingField[2].color = sf::Color::Black;
	playingField[3].color = sf::Color::Black;

	bool playing = false;
	

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (btnStart.buttonClicked(event, sf::Mouse::getPosition(window))) {
				playing = true;
				quantityPoints = 0;
				txtPoints.setString(std::to_string(quantityPoints));
			}
			if(btnStop.buttonClicked(event, sf::Mouse::getPosition(window)))
				playing = false;
			
			
			if (playing){
				if(eps.getElapsedTime().asSeconds() > (1.2f+rand()%3))
				{
					eps.restart();
						Point point(sf::Vector2f(100 + rand() % 700, 0),
						(sf::Color((1 + rand() % 255), (1 + rand() % 255), (1 + rand() % 255), 255)),
							sf::Vector2f(0, (0.5f + rand() % 2)));
						pointArray.push_back(point);
				}
				for (int i = 0; i < pointArray.size(); i++) {
					pointArray[i].update(eps.getElapsedTime().asSeconds());
					if (pointArray[i].pointClicked(event, sf::Mouse::getPosition(window))) {
					
						pointArray.erase(pointArray.begin() + i);
						quantityPoints++;
						txtPoints.setString(std::to_string(quantityPoints));
					}else if(!playingField.getBounds().contains(pointArray[i].getPosition()))
					{
						pointArray.erase(pointArray.begin() + i);
					}
						
				}
			}
			else { pointArray.clear();}
		}
		window.clear(sf::Color::White);

		window.draw(btnStart);
		window.draw(btnStop);

		window.draw(playingField);

		window.draw(txtScore);
		window.draw(txtPoints);

		for (auto& pnt : pointArray)
			window.draw(pnt);

		window.display();
	}*/
	return 0;
}