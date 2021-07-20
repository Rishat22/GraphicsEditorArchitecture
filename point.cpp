#include "point.h"

Point::Point()
	: m_posX(0)
	, m_posY(0)
{
}

Point::Point(const ushort posX, const ushort posY)
	: m_posX(posX)
	, m_posY(posY)
{
}

ushort Point::posX() const
{
	return m_posX;
}

ushort Point::posY() const
{
	return m_posY;
}


void Point::setPosY(const ushort& posY)
{
	m_posY = posY;
}

void Point::setPosX(const ushort& posX)
{
	m_posX = posX;
}
