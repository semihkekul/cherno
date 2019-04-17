#include <iostream>
using namespace std;
class CstaticInclass {
	
public:
	static int m_x;

	static int& getInt() {
		cout << "getInt()" << endl;
		static int y;
		return y;
	}

	static char& getChar() {
		static char c;
		return c;
	}
};

int CstaticInclass::m_x;  //like a namespace



int funcinClass() {
	CstaticInclass c;
	c.m_x = 5;
	CstaticInclass::m_x = 7;

	CstaticInclass c2;
	c2.m_x = 8;

	cout << c.m_x << " " << c2.m_x << endl;
	c2.getInt();
	CstaticInclass::getInt();

	CstaticInclass::getChar() = 'a';

	return 0;
}