#ifndef BOX_H
#define BOX_H

#include<SFML/Graphics.hpp>

class Box
{
	public:
		Box(float X, float Y);
	
		//get texture/symbol
		sf::Texture get_symbol();
		
		//set texture/symbol
		void set_symbol(sf::Texture texture);
		
		//get box
		sf::RectangleShape get_box();
		
		//if hover
		void hover();
		
		//if click
		void click();
		
	private:
		sf::RectangleShape box;
		sf::Texture symbol;
};

#endif
