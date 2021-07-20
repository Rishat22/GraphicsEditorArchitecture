#include "rectangle.h"


void Rectangle::draw() const
{

}

void Rectangle::load(Visitor* visitor) const
{
	visitor->load(this);
}

void Rectangle::save(Visitor* visitor) const
{
	visitor->save(this);
}
