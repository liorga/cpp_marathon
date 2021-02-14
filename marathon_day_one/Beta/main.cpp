#include <iostream>
using namespace std;



/** implement Beta class so the program give the wanted output
 *
 * wanted output:
 * Beta versions ahead...
 * Willkommen in Wien!
 * Dry the rain!
 */

class Bend : public Beta {
public:
	virtual void besked() { cout << "Dry the rain!\n"; }
};

class Tester : public Beta {
public:
	virtual void besked() { cout << "Willkommen in Wien!\n"; }
};

int main(void) {
	Bend BB;
	Tester BT;
	Beta &h1 = BB;
	Beta &h2 = BT;
	h1 = h2;
	h2.besked();
	h1.besked();
	return 0;
}

/** implement Beta class so the program give the wanted output
 *
 * wanted output:
 * Beta versions ahead...
 * Willkommen in Wien!
 * Dry the rain!
 */
























/*class Beta {
	int capacity;
public:
	Beta(int n=100) : capacity(n) { }
	virtual void besked() = 0;
	Beta& operator=(const Beta& other) {
		std::cout << "Beta versions ahead...\n";
		return *this;
	}
};*/
