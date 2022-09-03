#pragma once

class BaseElement 
{
protected:
	bool invariable;
	bool preferred;

public:
	BaseElement();
	~BaseElement();

	virtual bool isInvariable();
	virtual bool isPreferred();

	virtual void setInvariable(bool invariable);
	virtual void setPreferred(bool preferred);
};