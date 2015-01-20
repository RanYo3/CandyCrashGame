#pragma once

#include "Color.h"
#include "Point.h"

#define NULL 0

class Shape
{
public:
	Shape(Color color = BLACK);
	virtual ~Shape();

	Shape(const Shape &other);
	const Shape &operator=(const Shape &other);

	const Color &GetColor() const;
	void SetColor(const Color &color);

	const Point &GetTopLeft() const;
	const Point &GetBottomRight() const;
	
	virtual Point *GetPolygon() const = 0;

private:
	Color m_Color;
	Point m_TopLeft;
	Point m_BottomRight;
};