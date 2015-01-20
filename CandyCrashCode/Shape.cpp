#include "Shape.h"

Shape::Shape(Color color)
	: m_TopLeft(), m_BottomRight(), m_Color(color), m_Polygon(NULL)
{
}

Shape::~Shape()
{
	if (m_Polygon != NULL)
	{
		delete[] m_Polygon;
	}
}

Shape::Shape(const Point &topLeft, const Point &bottomRight, Color color)
	: m_TopLeft(topLeft), m_BottomRight(bottomRight), m_Color(color), m_Polygon(NULL)
{
}

Shape::Shape(const Shape &other)
{
	m_TopLeft = other.m_TopLeft;
	m_BottomRight = other.m_BottomRight;
	m_Color = other.m_Color;
	m_Polygon = NULL;
}

const Shape &Shape::operator=(const Shape &other)
{
	if (&other != this)
	{
		m_TopLeft = other.m_TopLeft;
		m_BottomRight = other.m_BottomRight;
		m_Color = other.m_Color;
		m_Polygon = NULL;
	}

	return *this;
}

bool Shape::operator==(const Shape &other) const
{
	return (this->GetPolygonSize() == other.GetPolygonSize());
}

bool Shape::operator!=(const Shape &other) const
{
	return !(*this == other);
}

const Point &Shape::GetTopLeft() const
{
	return m_TopLeft;
}

const Point &Shape::GetBottomRight() const
{
	return m_BottomRight;
}

const Color &Shape::GetColor() const
{
	return m_Color;
}

void Shape::SetTopLeft(const Point &topLeft)
{
	m_TopLeft = topLeft;
}

void Shape::SetBottomRight(const Point &bottomRight)
{
	m_BottomRight = bottomRight;
}

void Shape::SetColor(const Color &color)
{
	m_Color = color;
}

Point *Shape::GetPolygon() const
{
	return m_Polygon;
}

void Shape::InitPolygon()
{
	if (m_Polygon != NULL)
	{
		delete[] m_Polygon;
	}
	m_Polygon = CreatePolygon();
}