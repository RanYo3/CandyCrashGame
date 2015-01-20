#include "Triangle.h"

Triangle::Triangle()
	: Shape(ST_Triangle)
{
	InitPolygon();
}

Triangle::~Triangle()
{
}

Triangle::Triangle(Color color)
	: Shape(ST_Triangle, color)
{
	InitPolygon();
}

Triangle::Triangle(const Point &topLeft, const Point &bottomRight)
	: Shape(topLeft, bottomRight, ST_Triangle)
{
	InitPolygon();
}

Triangle::Triangle(const Point &topLeft, const Point &bottomRight, Color color)
	: Shape(topLeft, bottomRight, ST_Triangle, color)
{
	InitPolygon();
}

Triangle::Triangle(const Triangle &other)
	: Shape(other)
{
	InitPolygon();
}

const Triangle &Triangle::operator=(const Triangle &other)
{
	if (&other != this)
	{
		Shape::operator=(other);
		InitPolygon();
	}

	return *this;
}

int Triangle::GetPolygonSize() const
{
	return TRNG_SIZE;
}

Shape *Triangle::Clone() const
{
	return new Triangle(*this);
}

Point *Triangle::CreatePolygon() const
{
	Point *poly = new Point[TRNG_SIZE];
	Point topLeft = GetTopLeft();
	Point bottomRight = GetBottomRight();

	poly[0] = Point((topLeft.GetX() + bottomRight.GetX()) / 2, topLeft.GetY());
	poly[1] = bottomRight;
	poly[2] = Point(topLeft.GetX(), bottomRight.GetY());

	return poly;
}