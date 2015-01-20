#include "Diamond.h"

Diamond::Diamond()
	: Shape(ST_Diamond)
{
	InitPolygon();
}

Diamond::~Diamond()
{
}

Diamond::Diamond(Color color)
	: Shape(ST_Diamond, color)
{
	InitPolygon();
}

Diamond::Diamond(const Point &topLeft, const Point &bottomRight)
	: Shape(topLeft, bottomRight, ST_Diamond)
{
	InitPolygon();
}

Diamond::Diamond(const Point &topLeft, const Point &bottomRight, Color color)
	: Shape(topLeft, bottomRight, ST_Diamond, color)
{
	InitPolygon();
}

Diamond::Diamond(const Diamond &other)
	: Shape(other)
{
	InitPolygon();
}

const Diamond &Diamond::operator=(const Diamond &other)
{
	if (&other != this)
	{
		Shape::operator=(other);
		InitPolygon();
	}

	return *this;
}

int Diamond::GetPolygonSize() const
{
	return DMND_SIZE;
}

Shape *Diamond::Clone() const
{
	return new Diamond(*this);
}

Point *Diamond::CreatePolygon() const
{
	Point *poly = new Point[DMND_SIZE];
	Point topLeft = GetTopLeft();
	Point bottomRight = GetBottomRight();

	poly[0] = Point((topLeft.GetX() + bottomRight.GetX()) / 2,  topLeft.GetY()                          );
	poly[1] = Point( bottomRight.GetX()                      , (topLeft.GetY() + bottomRight.GetY()) / 2);
	poly[2] = Point((topLeft.GetX() + bottomRight.GetX()) / 2,  bottomRight.GetY()                      );
	poly[3] = Point( topLeft.GetX()                          , (topLeft.GetY() + bottomRight.GetY()) / 2);

	return poly;
}