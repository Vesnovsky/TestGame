#ifndef POINT
#define POINT
#include<SFML/Graphics.hpp>
#include<iostream>
#include <iostream>
#include <ctime>
class Point:public sf::Drawable
{
public:
	Point(const sf::Vector2f& pntPosition,const sf::Color& pntColor,const sf::Vector2f& pntSpeed, const std::string& nameOfFile);
	void update();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	sf::Vector2f getPosition();
	bool pointClicked(const sf::Event& event, const sf::Vector2i mousePosition);
private:
	sf::Texture pntTexture;
	sf::Sprite square;
	sf::Color pntColor;
	sf::Vector2f pntPosition;
	sf::Vector2f pntSpeed;
};

#endif
