#include "Ellipse.h"

Ellipse::Ellipse()
	: Shape(ST_Ellipse)
{
	InitPolygon();
}

Ellipse::~Ellipse()
{
}

Ellipse::Ellipse(Color color)
	: Shape(ST_Ellipse, color)
{
	InitPolygon();
}

Ellipse::Ellipse(const Point &topLeft, const Point &bottomRight)
	: Shape(topLeft, bottomRight, ST_Ellipse)
{
	InitPolygon();
}

Ellipse::Ellipse(const Point &topLeft, const Point &bottomRight, Color color)
	: Shape(topLeft, bottomRight, ST_Ellipse, color)
{
	InitPolygon();
}

Ellipse::Ellipse(const Ellipse &other)
	: Shape(other)
{
	InitPolygon();
}

const Ellipse &Ellipse::operator=(const Ellipse &other)
{
	if (&other != this)
	{
		Shape::operator=(other);
		InitPolygon();
	}

	return *this;
}

int Ellipse::GetPolygonSize() const
{
	return ELPS_SIZE;
}

Shape *Ellipse::Clone() const
{
	return new Ellipse(*this);
}

Point *Ellipse::CreatePolygon() const
{
	Point *poly = new Point[ELPS_SIZE];

	poly[0] = GetTopLeft();
	poly[1] = GetBottomRight();

	return poly;
}