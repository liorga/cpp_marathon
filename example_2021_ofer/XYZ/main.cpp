#include <iostream>
using namespace std;
class X{
	int t;

public:
	X() : t(0) {}
	~X() { cout << "Deleting X" << endl; }
};

class Y{
	X* xy;
public:
	Y() : xy(new X) {}
	~Y() { delete xy; cout << "Deleting Y" << endl; }
};

class Z{
	Y yz;
	Y* yzp;
public:
	Z() :  yzp(new Y) { }
	~Z() { delete yzp; cout << "Deleting Z" << endl; }
};

int main()
{
	Z z;
	return 0;
}
