#include <iostream>

int func()
{
	int var = 8;
	int* ptr = &var;
	*ptr = 25;

	char* charPtr = new char[9];
	memset(charPtr, 0xA, 9);

	char** charPP = &charPtr;

	return 0;
}

