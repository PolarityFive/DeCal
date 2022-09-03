#include "BaseElement.h"

BaseElement::BaseElement()
{
    this->invariable = true;
    this->preferred = false;
}

bool BaseElement::isInvariable()
{
    return (this->invariable ? true : false);
}

bool BaseElement::isPreferred()
{
    return(this->preferred ? true : false);
}

void BaseElement::setInvariable(bool invariable)
{
    this->invariable = (invariable ? true : false);
}

void BaseElement::setPreferred(bool preferred)
{
    this->preferred = (preferred ? true : false);
}


