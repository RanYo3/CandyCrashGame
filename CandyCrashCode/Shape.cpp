#include "Shape.h"

Shape::Shape(Color color)
	: m_Color(color), m_Vertices(NULL), m_NumOfVertices(0)
{
}

Shape::~Shape()
{
	if (m_Vertices != NULL)
	{
		delete[] m_Vertices;
	}
}

Shape::Shape(const Shape &other)
{
	m_Color = other.m_Color;
	m_NumOfVertices = other.m_NumOfVertices;
	m_Vertices = new Point[m_NumOfVertices];

	for (int i = 0; i < m_NumOfVertices; i++)
	{
		m_Vertices[i] = other.m_Vertices[i];
	}
}

const Shape &Shape::operator=(const Shape &other)
{
	m_Color = other.m_Color;
	m_NumOfVertices = other.m_NumOfVertices;

	if (m_Vertices != NULL)
	{
		delete[] m_Vertices;
	}

	m_Vertices = new Point[m_NumOfVertices];

	for (int i = 0; i < m_NumOfVertices; i++)
	{
		m_Vertices[i] = other.m_Vertices[i];
	}

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

Point *Shape::GetVertices() const
{
	return m_Vertices;
}

void Shape::AddVertex(const Point &vertex)
{

}