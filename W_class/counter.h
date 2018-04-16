#pragma once

class counter
{

private:
	int value;
	

public:
	void setValue(int n = 0)
	{
		this->value = n;
	}
	void setMin()
	{
		value = 0;
	}
	void setMax()
	{
		value = 59;
	}
	void Increment()
	{
		if (value < 59)
			value++;
		else
			value = 0;
	}
	int getValue()
	{
		return value;
	}
};