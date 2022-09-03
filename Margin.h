#pragma once

class Margin
{
private:
	unsigned int margin;
	unsigned const int DEFAULT_MARGIN = 30;
public:
	Margin();
	unsigned int getMargin();
	void setMargin(unsigned int margin);
};