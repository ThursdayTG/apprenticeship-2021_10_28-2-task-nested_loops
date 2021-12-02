// inclusion of libraries
#include <iostream>
#include <string>

// namespace
using namespace std;


int main(){

	/*
	 * Aufgabe 1
	 *
	 * 11111
	 * 22222
	 * 33333
	 * 44444
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
g++ nested_for_loops_practice1.cpp -o nested_for_loops_practice1

	run from console:
./nested_for_loops_practice1

	clear, compile, run:
clear && g++ nested_for_loops_practice1.cpp -o nested_for_loops_practice1 && ./nested_for_loops_practice1

	name meaning:
C++ for Schmid
*/
