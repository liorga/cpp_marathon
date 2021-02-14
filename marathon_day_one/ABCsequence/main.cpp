#include <iostream>
#include <vector>
using namespace std;















































/*template<typename CharT, typename Container = std::vector<CharT> >
class ABCsequence {
	Container data;
public:
	ABCsequence(const CharT*);
	explicit ABCsequence(const Container&);
	ABCsequence(const ABCsequence&);
	ABCsequence& operator=(const ABCsequence&);
	ABCsequence& operator=(const CharT*);
	~ABCsequence();
	bool empty() const;
	unsigned int size() const;
	CharT& operator[](unsigned int);
	CharT operator[](unsigned int) const;
	ABCsequence& operator+=(const CharT*);
	ABCsequence& operator+=(CharT);
	ABCsequence& operator--();
	
	void reverse() {
		typename Container::iterator b = data.begin();
		typename Container::iterator e = data.end();
		while ((b != e) && (b != (--e))) {
			std::swap(*b, *e);
			++b;
		}
	}
};



int main() {
	const char* arigato = "きゃっかんてき";
	
	ABCsequence<char> A(arigato);
	A.reverse();
	for (int i=0; i<A.size(); i++)
		cout << A[i] << ' ';
	cout << '\n';
	return 0;
}*/
