#include <iostream>
#include <map>
#include <iterator>
using namespace std;


typedef std::multimap< unsigned short, string, less<unsigned int> > mm80s;


/**
 * write a program that gets the 3 movies with the most newest year
 * the multimap should have at least 6 movies
 */
int main(void) {
	/**
	 *  your code here
	 */

	return 0;
}

/**
 * wanted output
 *
 *  1987 The Princes Bride
 *  1986 Top Gun
 *  1985 The Breakfast Club
 */




























/*
mm80s movies;
movies.insert( mm80s::value_type(1986,string("Top Gun")) );
movies.insert( mm80s::value_type(1985,string("The Breakfast Club")) );
movies.insert( mm80s::value_type(1982,string("E.T.")) );
movies.insert( mm80s::value_type(1987,string("The Princess Bride")) );
movies.insert( mm80s::value_type(1980,string("The Empire Strikes Back")) );
movies.insert( mm80s::value_type(1984,string("Ghostbusters")) );
mm80s::const_iterator iter = movies.begin();
for (int k=0; k < 3; k++,iter++)
cout << iter->first << '\t'<< iter->second << '\n';*/
