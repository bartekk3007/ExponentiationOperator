#include <iostream>
#include <cmath>

class Integer
{
	public:
	int value;
	Integer() : value(0)
	{

	}
	Integer(int arg) : value(arg)
	{

	}
	Integer operator^(const Integer& integer)
	{
		int result = pow(this->value, integer.value);
		return Integer(result);
	}
	friend std::ostream& operator<<(std::ostream& os, const Integer& integer)
	{
		return os << integer.value;
	}
};