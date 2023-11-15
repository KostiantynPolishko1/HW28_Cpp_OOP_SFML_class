#include "Cube.h"

int main() {

    sf::RenderWindow window(sf::VideoMode(400, 400), "Cube");

    Cube* cube = new Cube(100.0f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color(0, 0, 0));

        window.draw(*cube);
        window.display();
    }

    delete cube;
    cube = nullptr;

	return 0;
}