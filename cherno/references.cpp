#include <iostream>

int funcRef1()
{
	int abcd = 555;
	abcd = abcd + 111;

	int& xyzd = abcd;
	xyzd = xyzd + 1111;
	return 0;
}

