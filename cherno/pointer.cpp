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

struct St {
	char c;
	int i;
};

int func2()
{
	int abcd = 5;

	St* stptr = new St[3];
	memset(stptr, 1, 3 * sizeof(St));
	stptr[0].c = 'a';
	stptr[1].c = 'a';
	stptr[2].c = 'a';

	stptr[0].i = 111;
	stptr[1].i = 222;
	stptr[2].i = 333;

	return 0;
}


