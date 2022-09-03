#include "Gutter.h"

Gutter::Gutter()
{
    this->size = 0;
}

unsigned int Gutter::getSize()
{
    return(this->size);
}

void Gutter::setSize(unsigned int size)
{
    this->size = size;
}

