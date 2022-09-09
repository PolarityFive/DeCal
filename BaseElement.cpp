#include "BaseElement.h"

BaseElement::BaseElement()
{
    this->invariable = false;
}

bool BaseElement::isInvariable()
{
    return (this->invariable);
}

void BaseElement::setInvariable(bool invariable)
{
    this->invariable = invariable;
}

void BaseElement::setMin(unsigned int min)
{
    this->min = min;
}

void BaseElement::setMax(unsigned int max)
{
    this->max = max;
}

unsigned int BaseElement::getMin()
{
    return (this->min);
}

unsigned int BaseElement::getMax()
{
    return (this->max);
}


