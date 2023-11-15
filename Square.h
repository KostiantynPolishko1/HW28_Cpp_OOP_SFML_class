#pragma once

#ifndef SQUARE_H
#define SQUARE_H

#include <SFML/Graphics.hpp>

class Square final: public sf::VertexArray
{
public:
	Square() {}

	void createSquare(float points[][2], const float offsetX = 0.0f, const float offsetY = 0.0f)
	{
		for (size_t i = 0; i < 5; i++) {
			points[i][0] += offsetX;
			points[i][1] += offsetY;
		}

		for (size_t i = 0; i < 5; i++)
			this->append(sf::Vector2f(points[i][0], points[i][1]));

		this->setPrimitiveType(sf::PrimitiveType::LineStrip);
	}
}
;
#endif