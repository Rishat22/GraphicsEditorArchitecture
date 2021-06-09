#include "circle.h"


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
