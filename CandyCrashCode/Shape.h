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

	Point *GetVertices() const;
	
	virtual void Draw() const = 0;

protected:
	void AddVertex(const Point &vertex);

private:
	Color m_Color;
	Point *m_Vertices;
	int m_NumOfVertices;
};