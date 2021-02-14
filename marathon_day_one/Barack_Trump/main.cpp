#include<iostream>
using namespace std;

class Donald;

class Barack{
	char _b;
public:
	Barack(char c='a') : _b(c) { }
	Barack(const Barack& pres) : _b(pres._b) { }
	///your code here
	
};

class Donald{
	Barack j;
public:
	Donald() : j('z') { }
	explicit Donald(const Barack& pres) : j(pres) { cout << "Donald from Barack" << endl; }
};



int main(void){
	Barack b;
	Donald a = b;
	Donald j(b);
	return 0;
}























//operator Donald() const;
/*Barack::operator Donald() const {
cout << "Obama to Trump" << endl;
return Donald();
}*/