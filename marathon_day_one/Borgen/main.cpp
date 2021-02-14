#include<iostream>
using namespace std;
template<class T, int sz = 1> class AWrap {
	T* ptr;
public:
	class RError {};
	AWrap() { ptr = new T[sz]; }
	~AWrap() { delete []ptr; }
	T& operator[](int i) throw(RError) {
		if (i >= 0 && i < sz) return ptr[i];
		throw RError();
	}
};

class Borgen {
public:
	Borgen() { cout << "Borgen()" << endl; }
	~Borgen() { cout << "~Borgen()" << endl; }
};
/// what is the output of this program???
int main(void) {
	try {
		AWrap<Borgen> BN;
		BN[1]=BN[0];
	} catch(AWrap<Borgen>::RError& e) { cout << "It insists upon itself!" << endl; }
	return 0;
}












/***
 *
 *  Borgen()
 *  ~Borgen()
 *  It insists upon itself!
*/