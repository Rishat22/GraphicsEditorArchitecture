#ifndef GRAPHICSITEM_H
#define GRAPHICSITEM_H
#include "../rect.h"
#include "../color.h"
#include "../Data/visitor.h"

class GraphicsShape
{
public:
    GraphicsShape() = default;
    virtual ~GraphicsShape() = default;
    void setColor(const Color& color);
    virtual Rect boundingRect(void) const;
	virtual void draw() const = 0;
	virtual void load(Visitor* visitor) const = 0;
	virtual void save(Visitor* visitor) const = 0;
private:
    Rect m_boundingRect;
    Color m_color;
};

#endif // GRAPHICSITEM_H
