#include "Margin.h"

Margin::Margin()
{
    this->margin = this->DEFAULT_MARGIN;
}

unsigned int Margin::getMargin()
{
    return (this->margin);
}

void Margin::setMargin(unsigned int margin)
{
    this->margin = margin;
}
