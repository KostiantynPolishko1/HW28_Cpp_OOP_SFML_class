#include "Cube.h"

int main() {

    sf::RenderWindow window(sf::VideoMode(400, 400), "Cube");

    Cube cube(50.0f);

    //Square square(50);
    //Line line(sf::Vector2f(10.0f, 10.0f), sf::Vector2f(20.0f, 20.0f));
    //
    //const float offsetX = 25.0f;
    //const float offsetY = 10.0f;
    //
    //float side = 50.0f;
    //float points[5][2] = { {0, 0}, {side, 0}, {side, side}, {0, side}, {0, 0} };
    //
    //sf::VertexArray front(sf::LineStrip, 5);
    //
    //for (size_t i = 0; i < 5; i++){
    //    front[i].position = sf::Vector2f(points[i][0], points[i][1]);
    //    front[i].color = sf::Color::White;
    //}
    //
    //front[4] = front[4];

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color(0, 0, 0));

        window.draw(cube);
        window.display();
    }
	return 0;
}