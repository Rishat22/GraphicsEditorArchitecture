#include "circle.h"


Circle::Circle()
	: m_center(Point(0, 0))
	, m_radius(0)
{

}

Circle::Circle(const Point& center, const int radius)
	: m_center(center)
	, m_radius(radius)
{

}

void Circle::draw() const
{

}

void Circle::load(Visitor* visitor) const
{
	visitor->load(this);
}

void Circle::save(Visitor* visitor) const
{
	visitor->save(this);
}
