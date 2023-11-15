#pragma once

#ifndef CUBE_H
#define CUBE_H

#include "Square.h"

class Cube final : public sf::Drawable
{
private:
	Square front;
	Square back;
	float side;
	float space;
	float offsetX;
	float offsetY;

public:
	Cube(float side) : side{ side }, space{ 10.0f }, offsetX{ 20.0f }, offsetY{ 10.0f }, front{}, back{}
	{
		float arr[5][2] = { {0.0f, 0.0f}, { side, 0.0f }, { side, side }, { 0.0f, side }, { 0.0f, 0.0f } };
		front.createSquare(arr, this->space, this->space);
		back.createSquare(arr, this->space + this->offsetX, this->space + this->offsetY);
	}

	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const {
		states.texture = NULL;
		target.draw(front, states);
		target.draw(back, states);
	}
};
#endif