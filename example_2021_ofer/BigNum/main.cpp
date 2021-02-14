#include <iostream>
using namespace std;

typedef unsigned int uint;
template <uint N = 2>
class BN {
	uint data[N];

public:
	BN() {}
	BN(char* arr,uint size);
	BN(const BN& rhs){
		for(int i = 0 ; i < N ; i++){
			data[i] = rhs.data[i];
		}
	}
	~BN() {}
	BN& operator=(const BN& rhs){
		for(int i = 0 ; i < N ; i++){
			data[i] = rhs.data[i];
		}
		return *this;
	}
	char operator[](uint i) const {
		return data[i];
	}
	void setBit(uint i ,char x){
		data[i] = x;
	}
	void randomize();
	void print() const;
	operator string() const;
};


int main()
{
	
	BN<2> a,b;
	a.setBit(0,'a');
	a.setBit(1,'b');
	b = a;
	cout << a[0] << " " << a[1] << " " << endl;
	cout << b[0] << " " << b[1] << " " << endl;
	
	return 0;
}
