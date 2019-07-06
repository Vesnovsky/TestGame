#include "Point.h"




Point::Point(const sf::Vector2f& pntPosition, const sf::Color& pntColor,const sf::Vector2f& pntSpeed, const std::string& nameOfFile)
{
	this->pntSpeed = pntSpeed;
	pntTexture.loadFromFile("Point.png");
	square.setTexture(pntTexture);
	square.setPosition(pntPosition);
	square.setColor(pntColor);
}

void Point::update()
{
	square.move(pntSpeed.x, pntSpeed.y );
}

void Point::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(square, states);
}

sf::Vector2f Point::getPosition()
{
	return square.getPosition();
}

bool Point::pointClicked(const sf::Event& event, const sf::Vector2i mousePosition)
{
	if (square.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePosition))) {
		if (event.mouseButton.button == sf::Mouse::Left && event.type == sf::Event::MouseButtonReleased) {
			return true;
		}
		else { 
			return false;
		}
	}
}




