#ifndef BUTTON
#define BUTTON
#include<SFML/Graphics.hpp>
#include<iostream>

class Button: public sf::Drawable
{
public:
	Button(const sf::Vector2f& btnPosition,const std::string& nameOfFile);
	bool buttonClicked(const sf::Event& event, const sf::Vector2i mousePosition);
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	
private:
	
	sf::Sprite btnSprite;
	sf::Texture btnTexture;
};
#endif
