#pragma once

#include "Shape.h"
#include "Point.h"
#include "Color.h"

#define TRNG_SIZE 3

class Triangle : public Shape
{
public:
	Triangle();
	virtual ~Triangle();

	Triangle(Color color);
	Triangle(const Point &topLeft, const Point &bottomRight);
	Triangle(const Point &topLeft, const Point &bottomRight, Color color);
	Triangle(const Triangle &other);
	const Triangle &operator=(const Triangle &other);

	virtual int GetPolygonSize() const;

	virtual Shape *Clone() const;

private:
	virtual Point *CreatePolygon() const;
};