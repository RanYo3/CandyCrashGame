#include "Rectangle.h"

Rectangle::Rectangle()
	: Shape(ST_Rectangle)
{
	InitPolygon();
}

Rectangle::~Rectangle()
{
}

Rectangle::Rectangle(Color color)
	: Shape(ST_Rectangle, color)
{
	InitPolygon();
}

Rectangle::Rectangle(const Point &topLeft, const Point &bottomRight)
	: Shape(topLeft, bottomRight, ST_Rectangle)
{
	InitPolygon();
}

Rectangle::Rectangle(const Point &topLeft, const Point &bottomRight, Color color)
	: Shape(topLeft, bottomRight, ST_Rectangle, color)
{
	InitPolygon();
}

Rectangle::Rectangle(const Rectangle &other)
	: Shape(other)
{
	InitPolygon();
}

const Rectangle &Rectangle::operator=(const Rectangle &other)
{
	if (&other != this)
	{
		Shape::operator=(other);
		InitPolygon();
	}

	return *this;
}

int Rectangle::GetPolygonSize() const
{
	return RECT_SIZE;
}

Shape *Rectangle::Clone() const
{
	return new Rectangle(*this);
}

Point *Rectangle::CreatePolygon() const
{
	Point *poly = new Point[RECT_SIZE];
	Point topLeft = GetTopLeft();
	Point bottomRight = GetBottomRight();

	poly[0] = topLeft;
	poly[1] = Point(bottomRight.GetX(), topLeft.GetY());
	poly[2] = bottomRight;
	poly[3] = Point(topLeft.GetX(), bottomRight.GetY());

	return poly;
}