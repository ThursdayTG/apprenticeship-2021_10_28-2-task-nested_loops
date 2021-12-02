// inclusion of libraries
#include <iostream>
#include <string>

// namespace
using namespace std;


int main(){

	/*
	 * Aufgabe 3 (gleichschenkliges / rechtwinkliges Dreieck)
	 *
	 * #
	 * ##
	 * ###
	 * ####
	 * #####
	 *
	 */

	/**/
	int		inputNumber,
			executionNumber = 1;


	cout	<< "put in a number: ";		cin	 >> inputNumber;
	cout	<< "\n";
	/**/

	/**/
	for (int iy	=	1;
		 iy		<=	inputNumber;
		 iy++){

		for (int ix	=	1;
			ix		<=	executionNumber;
			ix++){
			cout	<< "# ";
		}

		executionNumber++;
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
g++ nested_for_loops_practice3.cpp -o nested_for_loops_practice3

	run from console:
./nested_for_loops_practice3

	clear, compile, run:
clear && g++ nested_for_loops_practice3.cpp -o nested_for_loops_practice3 && ./nested_for_loops_practice3

	name meaning:
C++ for Schmid
*/
