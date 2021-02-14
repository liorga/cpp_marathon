#include <iostream>
using namespace std;

struct A {
	int foo;
};

struct B : public A {
	int bar;
	B(int x,int y) : bar(y) { this->foo = x; }
};

int main(){
	B b1(0,0), b2(1,1);
	A& aRef = b2;
	aRef = b1;
	cout << b1.foo << " " << b1.bar << " | " << b2.foo <<  " " << b2.bar << endl;
	return 0;
}