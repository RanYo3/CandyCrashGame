#include "Point.h"

Point::Point() 
	: m_X(0), m_Y(0)
{
}

Point::~Point()
{
}

Point::Point(int x, int y) 
	: m_X(x), m_Y(y)
{
}

Point::Point(const Point &other)
{
	m_X = other.m_X;
	m_Y = other.m_Y;
}

const Point &Point::operator=(const Point &other)
{
	m_X = other.m_X;
	m_Y = other.m_Y;

	return *this;
}

int Point::GetX() const
{
	return m_X;
}

int Point::GetY() const
{
	return m_Y;
}

void Point::SetX(int x)
{
	m_X = x;
}

void Point::SetY(int y)
{
	m_Y = y;
}