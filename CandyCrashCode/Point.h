#pragma once

class Point
{
public:
	Point();
	~Point();

	Point(int x, int y);
	Point(const Point &other);
	const Point &operator=(const Point &other);

	int GetX() const;
	int GetY() const;

	void SetX(int x);
	void SetY(int y);

private:
	int m_X;
	int m_Y;
};