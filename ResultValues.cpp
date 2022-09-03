#include "ResultValues.h"

void ResultValues::setWidth(unsigned int width)
{
	this->width = width;
}

void ResultValues::setMargin(unsigned int margin)
{
	this->margin = margin;
}

void ResultValues::setGutterSize(unsigned int gutterSize)
{
	this->gutterSize = gutterSize;
}

void ResultValues::setGutter(unsigned int gutter)
{
	this->gutter = gutter;
}

void ResultValues::setColumns(unsigned int columns)
{
	this->columns = columns;
}

unsigned int ResultValues::getWidth()
{
	return (this->width);
}

unsigned int ResultValues::getMargin()
{
	return(this->margin);
}

unsigned int ResultValues::getGutterSize()
{
	return(this->gutterSize);
}

unsigned int ResultValues::getGutter()
{
	return(this->gutter);
}

unsigned int ResultValues::getColumns()
{
	return(this->columns);
}
