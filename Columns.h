#pragma once
#include "BaseElement.h"
class Columns : protected BaseElement
{
private:
	unsigned int columns;
	const int DEFAULT_COLUMNS = 12;
public:
	Columns();
	~Columns();
	unsigned int getColumns();
	void setColumns(unsigned int columns);
};