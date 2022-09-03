#pragma once

class ResultValues {
private:
	unsigned int width;
	unsigned int margin;
	unsigned int gutter;
	unsigned int gutterSize;
	unsigned int columns;

public:
	void setWidth(unsigned int width);
	void setMargin(unsigned int margin);
	void setGutterSize(unsigned int gutterSize);
	void setGutter(unsigned int gutter);
	void setColumns(unsigned int columns);

	unsigned int getWidth();
	unsigned int getMargin();
	unsigned int getGutterSize();
	unsigned int getGutter();
	unsigned int getColumns();
};