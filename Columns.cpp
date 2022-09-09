#include "Columns.h"

Columns::Columns()
{
	this->columns = 12;
	this->min = 6;
	this->max = 60;
}

unsigned int Columns::getColumns()
{
	return (this->columns);
}

void Columns::setColumns(unsigned int columns)
{
	this->columns = columns;
}

