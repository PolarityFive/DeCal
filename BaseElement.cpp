#include "BaseElement.h"

BaseElement::BaseElement()
{
    this->invariable = true;
    this->preferred = false;
}

bool BaseElement::isInvariable()
{
    return (this->invariable);
}

bool BaseElement::isPreferred()
{
    return(this->preferred);
}

void BaseElement::setInvariable(bool invariable)
{
    this->invariable = invariable;
}

void BaseElement::setPreferred(bool preferred)
{
    this->preferred = preferred;
}


