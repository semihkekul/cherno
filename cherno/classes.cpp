#include <iostream>
using namespace std;
class Cs {

	
};

int funcClasses()
{
	Cs c;
	Cs* cSptr = &c;
	char* cPtr = (char*)cSptr;
	*cPtr = 'a';
	return 0;
}

class Cc {
	int m_x;
public:

	Cc() :m_x(0) {
		cout << "Cc()" << endl;

	}
	Cc(int x) :m_x(x) {
		cout << "Cc(intx)" << endl;
	}
	Cc(const Cc& other) {
		cout << "Cc(const Cc&)" << endl;
		m_x = other.m_x;
	}

	void reachPrivate(const Cc& other) {
		cout << other.m_x << endl;
	}
};