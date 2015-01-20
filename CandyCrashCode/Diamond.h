#pragma once

#include "Shape.h"
#include "Point.h"
#include "Color.h"

#define DMND_SIZE 4

class Diamond : public Shape
{
public:
	Diamond();
	virtual ~Diamond();

	Diamond(Color color);
	Diamond(const Point &topLeft, const Point &bottomRight);
	Diamond(const Point &topLeft, const Point &bottomRight, Color color);
	Diamond(const Diamond &other);
	const Diamond &operator=(const Diamond &other);

	virtual int GetPolygonSize() const;

	virtual Shape *Clone() const;

private:
	virtual Point *CreatePolygon() const;
};