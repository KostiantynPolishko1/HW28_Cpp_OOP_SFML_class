#pragma once

#ifndef CUBE_H
#define CUBE_H

#include "Square.h"
#include "Line.h"

class Cube final : public sf::Drawable
{
private:
	Square front;
	Square back;
	Line lines[4];

public:
	Cube(float side) : front{}, back{}, lines{}
	{
		float points[5][2] = { {0.0f, 0.0f}, { side, 0.0f }, { side, side }, { 0.0f, side }, { 0.0f, 0.0f } };
		float space{ 10.0f }, offsetX{ side*0.4f }, offsetY{ side*0.2f };

		front.createSquare(points, space, space);
		back.createSquare(points, space + offsetX, space + offsetY);
	
		for (size_t i = 0; i < 4; i++)
		{
			lines[i].createLine(sf::Vector2f(points[i][0] + space, points[i][1] + space), 
				sf::Vector2f(points[i][0] + space + offsetX, points[i][1] + space + offsetY));
		}
	}

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const {
		states.texture = NULL;

		target.draw(front, states);
		target.draw(back, states);

		for (size_t i = 0; i < 4; i++)
			target.draw(lines[i], states);
	}
};
#endif