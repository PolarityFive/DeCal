#include "Columns.h"

Columns::Columns()
{
	this->columns = this->DEFAULT_COLUMNS;
	this->min = 12;
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

