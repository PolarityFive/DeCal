#pragma once
#include "BaseElement.h"
class Gutter : protected BaseElement
{
private:
	unsigned int size;
public:
	Gutter();
	~Gutter();
	unsigned int getSize();
	void setSize(unsigned int size);
};