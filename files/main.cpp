#include<SFML/Graphics.hpp>
#include<iostream>
#include "Box.h"

int main()
{
	/*              making the window            */
	sf::RenderWindow window(sf::VideoMode(500,500),"Tic Tac Toe - 2D");
	window.setFramerateLimit(30);
	sf::Event eve;
	
	
	/*                  nine boxes                */
    Box box1(80,80);    Box box2(190,80);    Box box3(300,80);
    Box box4(80,190);   Box box5(190,190);   Box box6(300,190);
    Box box7(80,300);   Box box8(190,300);   Box box9(300,300);
	    	
	//game loop
	while(window.isOpen())
	{
		while(window.pollEvent(eve))
		{
			if(eve.type == eve.Closed)
			{
				window.close();
			}
		}
		
		window.clear();
		
		//drawing the box
		window.draw(box1.get_box());
		window.draw(box2.get_box());
		window.draw(box3.get_box());
		
		window.draw(box4.get_box());
		window.draw(box5.get_box());
		window.draw(box6.get_box());
		
		window.draw(box7.get_box());
		window.draw(box8.get_box());
		window.draw(box9.get_box());
		
		window.display();
	}
	
	return 0;
}
