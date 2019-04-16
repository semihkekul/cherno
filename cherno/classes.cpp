#include <iostream>

class Cs {

	
};

int main()
{
	Cs c;
	Cs* cSptr = &c;
	char* cPtr = (char*)cSptr;
	*cPtr = 'a';
	return 0;
}

