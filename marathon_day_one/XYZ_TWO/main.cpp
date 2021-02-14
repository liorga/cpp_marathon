#include <iostream>
class X {
	int t;
public:
	X() : t(0) { std::cout<<"Constructing X\n";}
	~X(){ std::cout<<"Deleting X\n"; }
};

class Y {
	X xy;
public:
	Y() { std::cout<<"Constructing Y\n";}
	~Y() {std::cout<<"Deleting Y\n"; }
};

/**
 * your code here
 */

int main(void) {

	return 0;
}










/*
class Z {
	Y yz;
public:
	Z() { std::cout<<"Constructing Z\n";}
	~Z() { std::cout<<"Deleting Z\n"; }
};*/
