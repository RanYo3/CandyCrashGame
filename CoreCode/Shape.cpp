#include "Shape.h"

Shape::Shape(Color color)
	: m_Color(color), m_TopLeft(), m_BottomRight()
{
}

Shape::~Shape()
{
}

Shape::Shape(const Shape &other)
{
	m_Color = other.m_Color;
	m_TopLeft = other.m_TopLeft;
	m_BottomRight = other.m_BottomRight;
}

const Shape &Shape::operator=(const Shape &other)
{
	m_Color = other.m_Color;
	m_TopLeft = other.m_TopLeft;
	m_BottomRight = other.m_BottomRight;

	return *this;
}

const Color &Shape::GetColor() const
{
	return m_Color;
}

void Shape::SetColor(const Color &color)
{
	m_Color = color;
}

const Point &Shape::GetTopLeft() const
{
	return m_TopLeft;
}

const Point &Shape::GetBottomRight() const
{
	return m_BottomRight;
}