#include<iostream>
using namespace std;
class Integer {
	int x;
public:
	Integer(int t):x(t) { }
	explicit Integer(double d):x(d) { }
	Integer operator+(const Integer& rhs) const {
		return x+rhs.x;
	}
	friend ostream& operator<<(ostream& out, const Integer& rhs) {
		out<<rhs.x;
		return out;
	}
};
/**
Integer foo(const Integer& a, const Integer& b) {
	return a+b;
}
Integer goo(const Integer& a, const Integer& b) {
	return a + 17;
}
Integer hoo(const Integer& a, const Integer& b) {
	return 11 + b;
}*/
