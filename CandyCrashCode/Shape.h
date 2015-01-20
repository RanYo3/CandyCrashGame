#pragma once

#include "Color.h"
#include "Point.h"

#define NULL 0

class Shape
{
public:
	Shape(Color color = BLACK);
	virtual ~Shape();

	Shape(const Point &topLeft, const Point &bottomRight, Color color = BLACK);
	Shape(const Shape &other);
	const Shape &operator=(const Shape &other);

	bool operator==(const Shape &other) const;
	bool operator!=(const Shape &other) const;

	const Point &GetTopLeft() const;
	const Point &GetBottomRight() const;
	const Color &GetColor() const;

	void SetTopLeft(const Point &topLeft);
	void SetBottomRight(const Point &bottomRight);
	void SetColor(const Color &color);

	virtual Point *GetPolygon() const;

	virtual int GetPolygonSize() const = 0;

	virtual Shape *Clone() const = 0;

protected:
	void InitPolygon();

	virtual Point *CreatePolygon() const = 0;

private:
	Color m_Color;
	Point m_TopLeft;
	Point m_BottomRight;
	Point *m_Polygon;
};