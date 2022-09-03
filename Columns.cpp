#include "Columns.h"

Columns::Columns()
{
	this->columns = this->DEFAULT_COLUMNS;
}

unsigned int Columns::getColumns()
{
	return (this->columns);
}

void Columns::setColumns(unsigned int columns)
{
	this->columns = columns;
}

