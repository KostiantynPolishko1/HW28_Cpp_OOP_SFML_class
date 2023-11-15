#include <iostream>
#include <SFML/Graphics.hpp>

int main() {

    sf::RenderWindow window(sf::VideoMode(400, 400), "Cube");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color(0, 0, 0));
        window.display();
    }
	return 0;
}