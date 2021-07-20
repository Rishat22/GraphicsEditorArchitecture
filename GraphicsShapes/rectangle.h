#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "graphics_shape.h"

class Rectangle : public GraphicsShape
{
public:
    Rectangle() = default;
    virtual ~Rectangle() = default;
	void draw() const override;
	void load(Visitor* visitor) const override;
	void save(Visitor* visitor) const override;
private:
};

#endif // RECTANGLE_H
