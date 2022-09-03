#pragma once
#include "BaseElement.h"
class Gutter : public BaseElement
{
private:
	unsigned int size;
public:
	Gutter();
	unsigned int getSize();
	void setSize(unsigned int size);
};