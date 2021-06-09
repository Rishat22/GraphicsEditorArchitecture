#ifndef CIRCLE_H
#define CIRCLE_H
#include "graphics_shape.h"

class Circle : public GraphicsShape
{
public:
    Circle() = default;
    virtual ~Circle() = default;
	void draw() const override;
	void load(Visitor* visitor) const override;
	void save(Visitor* visitor) const override;
private:
};

#endif // CIRCLE_H
