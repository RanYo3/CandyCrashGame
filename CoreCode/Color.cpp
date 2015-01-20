#include "Color.h"

Color::Color()
	: m_R(0), m_G(0), m_B(0)
{
}

Color::~Color()
{
}

Color::Color(char r, char g, char b)
	: m_R(r), m_G(g), m_B(b)
{

}

Color::Color(const Color &other)
{
	m_R = other.m_R;
	m_G = other.m_G;
	m_B = other.m_B;
}

const Color &Color::operator=(const Color &other)
{
	m_R = other.m_R;
	m_G = other.m_G;
	m_B = other.m_B;

	return *this;
}

void Color::SetRGB(char r, char g, char b)
{
	m_R = r;
	m_G = g;
	m_B = b;
}