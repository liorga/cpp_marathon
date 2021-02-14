#include <iostream>
#include <vector>
using namespace std;
unsigned short N = 5;

template <typename T>
void foo_bar (T a[],T c[], unsigned long length){
	T temp;
	c[0] = a[0]; //this is why a[0] is 'a' instad of 'A'
	for(unsigned long j = length ; j>0; j--){
		temp = a[j-1];
		a[j-1] = c[j-1];
		c[j-1] = temp;
	}
}

int main()
{
	
	char a[] = "abcde";
	char b[] = {'A','B','C','D','E'};
	
	foo_bar(a,b,N);
	
	for(unsigned short i=0 ; i < N ; i++) cout << a[i] << ' ';
	cout << endl;
	for(unsigned short i=0 ; i < N ; i++) cout << b[i] << ' ';
	cout << endl;
	return 0;
}
