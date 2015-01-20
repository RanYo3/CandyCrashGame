#pragma once

#include "Shape.h"
#include "Point.h"
#include "Color.h"

#define RECT_SIZE 4

class Rectangle : public Shape
{
public:
	Rectangle();
	virtual ~Rectangle();

	Rectangle(Color color);
	Rectangle(const Point &topLeft, const Point &bottomRight);
	Rectangle(const Point &topLeft, const Point &bottomRight, Color color);
	Rectangle(const Rectangle &other);
	const Rectangle &operator=(const Rectangle &other);

	virtual int GetPolygonSize() const;

	virtual Shape *Clone() const;

private:
	virtual Point *CreatePolygon() const;
};