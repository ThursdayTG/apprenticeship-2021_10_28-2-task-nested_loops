// inclusion of libraries
#include <iostream>
#include <string>

// namespace
using namespace std;


int main(){

	/*
	 * Aufgabe 7 (Modulo & Flags)
	 *
	 * 0#0#0#
	 * #0#0#0
	 * 0#0#0#
	 * #0#0#0
	 * 0#0#0#
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
g++ nested_for_loops_practice7.cpp -o nested_for_loops_practice7

	run from console:
./nested_for_loops_practice7

	clear, compile, run:
clear && g++ nested_for_loops_practice7.cpp -o nested_for_loops_practice7 && ./nested_for_loops_practice7

	name meaning:
C++ for Schmid
*/
