#include <iostream>
#include <memory>
using namespace std;

class B {
	string primary;

public:
	B(string r) : primary(r) {}
	virtual ~B() { }
	virtual string operator*() { return primary; }
};

class D : public B {
	string secondary;

public:
	D(string a, string b) : B(a), secondary(b) {}
	virtual ~D() {}
	virtual string operator*() { return secondary; }
};

int main()
{
	B f = D("Phillip", "Seymor Hoffman");
	auto_ptr<B> g (new D("James ", "Gandolfini"));
	cout << *f << ", " << **g << " : RIP" << endl;
	return 0;
}