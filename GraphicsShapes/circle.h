#ifndef CIRCLE_H
#define CIRCLE_H
#include "../point.h"
#include "graphics_shape.h"

class Circle : public GraphicsShape
{
public:
	Circle();
	Circle(const Point& center, const int radius);
	virtual ~Circle() = default;
	void draw() const override;
	void load(Visitor* visitor) const override;
	void save(Visitor* visitor) const override;
private:
	Point m_center;
	int m_radius;
};

#endif // CIRCLE_H
