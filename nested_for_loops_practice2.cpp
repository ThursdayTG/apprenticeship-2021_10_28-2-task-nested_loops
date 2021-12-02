// inclusion of libraries
#include <iostream>
#include <string>

// namespace
using namespace std;


int main(){

	/*
	 * Aufgabe 2
	 *
	 *	1	2	3	4	5
	 *	2	4	6	8	10
	 *	3	6	9	12	15
	 *	4	8	12	16	20
	 *
	 */

	/**/
	int		inputNumber,
			outputNumber = 1;


	cout	<< "put in a number: ";		cin	 >> inputNumber;
	cout	<< "\n";
	/**/

	/**/
	for (int iy	=	1;
		 iy		<=	inputNumber;
		 iy++){

		for (int ix	=	1;
			ix		<=	inputNumber;
			ix++){
			cout	<< outputNumber << " ";
		}

		outputNumber++;
		cout	<< "\n";
	}
	/**/

	/**
	cout	<<	"test ... \n";
	/**/

	/**/
	cout	<<	"\n";
	cin.ignore();						// use this block to pause progress in console, unpauses on pressing any button. cin.ignore(); may not always be necessary.
	cin.get();
	cout	<<	"\033[2J\033[1;1H";		// clears screen, string of special characters that will translate to a clear screen command.
	/**/

	return 0;

}

/*
	compile:
g++ nested_for_loops_practice2.cpp -o nested_for_loops_practice2

	run from console:
./nested_for_loops_practice2

	clear, compile, run:
clear && g++ nested_for_loops_practice2.cpp -o nested_for_loops_practice2 && ./nested_for_loops_practice2

	name meaning:
C++ for Schmid
*/
