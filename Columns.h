#pragma once
#include "BaseElement.h"
class Columns : public BaseElement
{
private:
	unsigned int columns;
	const int DEFAULT_COLUMNS = 12;
public:
	Columns();
	unsigned int getColumns();
	void setColumns(unsigned int columns);
};