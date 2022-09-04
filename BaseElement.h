#pragma once

class BaseElement 
{
protected:
	bool invariable;
	bool preferred;

	unsigned int min;
	unsigned int max;

public:
	BaseElement();

	virtual bool isInvariable();
	virtual bool isPreferred();

	virtual void setInvariable(bool invariable);
	virtual void setPreferred(bool preferred);

	virtual void setMin(unsigned int min);
	virtual void setMax(unsigned int max);

	virtual unsigned int getMin();
	virtual unsigned int getMax();
};