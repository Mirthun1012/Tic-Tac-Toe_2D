#include "Box.h"

//constructer
Box::Box(float X, float Y)
{
	//to blend with background
	box.setFillColor(sf::Color::Black);
	
	box.setSize(sf::Vector2f(100,100));
	
	box.setPosition(X,Y);
	
	//Because the width of the board lines is 10
	box.setOutlineThickness(10);
}

//setter functions
void Box::hover()
{
	box.setOutlineColor(sf::Color::Black);
}

void Box::click()
{
	//dimgrey
	box.setOutlineColor(sf::Color(105,105,105));
}

void Box::set_symbol(sf::Texture texture)
{
	symbol = texture;
}

//getter functions
sf::Texture Box::get_symbol()
{
	return symbol;
}

sf::RectangleShape Box::get_box()
{
	return box;
}
