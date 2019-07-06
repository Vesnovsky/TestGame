#include "Button.h"



Button::Button(const sf::Vector2f& btnPosition,const  std::string& nameOfFile)
{
	btnTexture.loadFromFile(nameOfFile);
	//this->btnTexture = btnTexture;
	btnSprite.setTexture(this->btnTexture);
	btnSprite.setPosition(btnPosition);
}

bool Button::buttonClicked(const sf::Event& event, const sf::Vector2i mousePosition){
	if (btnSprite.getGlobalBounds().contains(static_cast<sf::Vector2f>(mousePosition))) {
		if (event.mouseButton.button == sf::Mouse::Left && event.type == sf::Event::MouseButtonPressed) {
			btnSprite.setColor(sf::Color::Green);
			return true;
		}
		else {
			btnSprite.setColor(sf::Color::White);
			return false;
		}
	}
}



void Button::draw(sf::RenderTarget& target, sf::RenderStates states) const{
	target.draw(btnSprite, states);
}
