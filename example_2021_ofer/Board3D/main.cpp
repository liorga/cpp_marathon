#include <iostream>
using namespace std;

template<class T, unsigned int SIZE = 8>
class Board3D {
	T _M[SIZE][SIZE][SIZE];
public:
	Board3D() {
/*		for (int i = 0; i < SIZE; ++i)
			for (int j = 0; j < SIZE ; ++j)
				for (int k = 0; k < SIZE ; ++k)
					this->_M[i][j][k] = 0;*/
	}
	Board3D(const Board3D& src){
		for (int i = 0; i < SIZE; ++i)
			for (int j = 0; j < SIZE ; ++j)
				for (int k = 0; k < SIZE ; ++k)
					this->_M[i][j][k] = src._M[i][j][k];
	}
	
	void setBlock(const T* b, int i, int j) {
		if ((i >= SIZE) || (j >= SIZE))
			throw new T(std::max(i,j)); //returns the greatest element T that sent to max.
		
		for (int k=0; k<SIZE; k++)
			this->_M[i][j][k] = b[k];
	}
	
	T* getBlock(int i, int j) const {
		if ((i >= SIZE) || (j >= SIZE))
			throw new T(std::max(i,j));
		
		T* res(new T[SIZE]);
		for (int k=0; k<SIZE; k++)
			res[k] = this->_M[i][j][k];
		
		return res;
	}
	
	void setElement(int i, int j, int k, const T& val) {
		this->_M[i][j][k] = val;
	}
	
	T getElement(int i, int j, int k) const {
		return this->_M[i][j][k];
	}
	
	operator T* () {
		if (!_M[0][0][0])
			return &_M;
		return 0;
	}
	
	void incElement(int i, int j, int k) {
		++(this->_M[i][j][k]);
	}
};

class MyInt {
	int* _p;
public:
	MyInt(){} // for init T in field member of Board3D
	MyInt(unsigned int n) {
		_p = reinterpret_cast<int *>(n);
	} // for line
	MyInt(const MyInt& rhs){
		this->_p = rhs._p;
	}
	
	MyInt& operator=(const MyInt& other){
		this->_p = other._p;
		return *this;
	}
	
	bool operator!(){
		cout << "hey there" << endl;
		return _p == NULL;
	}
	
	MyInt& operator++(){
		*(this->_p)++;
		return *this;
	}
	
	friend ostream& operator<<(ostream& os, const MyInt& anInt) {
		os << "_p: " << anInt._p;
		return os;
	}
};






int main() {
	unsigned int num[1];
	num[0] = 5;
	Board3D<MyInt,8> bi;
	bi.setElement(0,0,0,num[0]);
	bi.incElement(0,0,0);
	cout << !bi.getElement(0,0,0) << endl;
	
	return 0;
}
