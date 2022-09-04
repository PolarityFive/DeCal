#include "Gutter.h"

Gutter::Gutter()
{
    this->size = 2;
    this->min = 2;
    this->max = 30;
}

unsigned int Gutter::getSize()
{
    return(this->size);
}

void Gutter::setSize(unsigned int size)
{
    this->size = size;
}

