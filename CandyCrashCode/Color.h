#pragma once

#define BLACK Color(0, 0, 0)

class Color
{
public:
	Color();
	~Color();

	Color(char r, char g, char b);
	Color(const Color &other);
	const Color &operator=(const Color &other);

	void SetRGB(char r, char g, char b);

private:
	char m_R;
	char m_G;
	char m_B;
};