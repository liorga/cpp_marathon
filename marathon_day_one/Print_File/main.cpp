#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
#include<algorithm>
using namespace std;
int main(int argc, char** argv) {
	ifstream* file((argc == 2) ? new ifstream(argv[1]) : 0);
	if (!*file) {
		cerr << "Trouble opening file!\n";
		return -1;
	}
	istream_iterator<char> my_it( (argc == 2) ? *file : cin);
	vector<char> vc;
	my_it++;
	for (; my_it != istream_iterator<char>(); my_it++) {
		vc.push_back(*(my_it));
		my_it++;
	}
	ostream_iterator<char> out_it(cout," ");
	copy(vc.begin(),vc.end(),out_it);
	delete file;
	return 0;
}