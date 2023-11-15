#pragma once

#ifndef LINE_H
#define LINE_H

#include <SFML/Graphics.hpp>

class Line final : public sf::VertexArray
{
public:
	Line() {}

	void createLine(const sf::Vector2f& start, const sf::Vector2f& end) 
	{
		this->append(start);
		this->append(end);
		this->setPrimitiveType(sf::PrimitiveType::Lines);
	}
};
#endif