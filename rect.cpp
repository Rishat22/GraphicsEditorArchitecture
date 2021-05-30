#include "rect.h"

Rect::Rect()
	: m_posX(0)
	, m_posY(0)
	, m_width(0)
	, m_height(0)
{
}

Rect::Rect(ushort left, ushort top, ushort width, ushort height)
	: m_posX(left)
	, m_posY(top)
	, m_width(width)
	, m_height(height)
{
}

ushort Rect::posX() const
{
	return m_posX;
}

ushort Rect::posY() const
{
	return m_posY;
}

ushort Rect::width() const
{
	return m_width;
}

ushort Rect::height() const
{
	return m_height;
}

void Rect::setPosY(const ushort& posY)
{
	m_posY = posY;
}

void Rect::setPosX(const ushort& posX)
{
	m_posX = posX;
}

void Rect::setWidth(const ushort& width)
{
	m_width = width;
}

void Rect::setHeight(const ushort& height)
{
	m_height = height;
}
