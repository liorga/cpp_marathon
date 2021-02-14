#include <iostream>

using namespace std;
class ExceptionA {
public:
	virtual void what() {
		cout << "ExceptionA" << endl;
	}
};

class ExceptionB : public ExceptionA {
public:
	void what() {
		cout << "ExceptionB" << endl;
	}
};

void foo() {
	throw ExceptionB();
}

void bar() {
	ExceptionA* pb = new ExceptionB();
	throw pb;
}


/**
 *  use given code to make this output with using in foo() and bar() functions at lest
 *  one time each!
 *
 *  wanted output is:
 *  ExceptionB
 *  ExceptionB
 *  ExceptionA
 */

int main() {
	/// your code hare!
	return 0;
}














/*	try {
		foo();
	} catch(ExceptionA & e) {
		e.what();
	}
	try {
		bar();
	} catch(ExceptionA * pe) {
		pe->what();
		delete pe;
	}
	try {
		foo();
	} catch(ExceptionA e) { e.what(); }*/