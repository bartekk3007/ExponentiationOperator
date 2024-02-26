#include <iostream>
#include "Integer.hpp"

int main()
{
	Integer i1(3);
	Integer i2(4);

	std::cout << i1 << ' ' << i2 << '\n';

	Integer i3 = i1 ^ i2;

	std::cout << i3 << '\n';

	return 0;
}