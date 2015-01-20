#pragma once

#include "Shape.h"
#include "Point.h"
#include "Color.h"

#define ELPS_SIZE 2

class Ellipse : public Shape
{
public:
	Ellipse();
	virtual ~Ellipse();

	Ellipse(Color color);
	Ellipse(const Point &topLeft, const Point &bottomRight);
	Ellipse(const Point &topLeft, const Point &bottomRight, Color color);
	Ellipse(const Ellipse &other);
	const Ellipse &operator=(const Ellipse &other);

	virtual int GetPolygonSize() const;

	virtual Shape *Clone() const;

private:
	virtual Point *CreatePolygon() const;
};