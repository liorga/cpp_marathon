#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
void Trump (vector<string> &f) {
	vector<string> ff;
	ff.resize(2*f.size());
	for (int k=0; k!=f.size(); ++k)
		ff[2*k] = ff[2*k+1] = f[k];
	f.vector::swap(ff);
}
int main(void) {
	vector<string> v;
	v.push_back("DK");
	v.push_back("SE");
	v.push_back("NOR");
	v.push_back("FIN");
	Trump(v);
	
	/// use copy algorithm to print the content of the vector after Trump function
	
	/// after doing so...what will be the output?
	
	cout << endl;
	return 0;
}





























//copy( v.begin(), v.end(), ostream_iterator<string>(cout," ") );
//DK DK SE SE NOR NOR FIN FIN