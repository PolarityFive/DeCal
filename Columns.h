#pragma once
#include "BaseElement.h"

class Columns : public BaseElement
{
private:
	unsigned int columns;
public:
	Columns();
	unsigned int getColumns();
	void setColumns(unsigned int columns);
};