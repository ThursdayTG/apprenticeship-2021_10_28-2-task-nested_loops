// inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "nested_loops_exercise-header.hpp"



int main() {

	/*
	 * exercise 2 (multiplication table)
	 *	1	2	3	4	5
	 *	2	4	6	8	10
	 *	3	6	9	12	15
	 *	4	8	12	16	20
	 *	5	10	15	20	25
	 *
	 */

	/**/
	using	std::cout,
			std::cin;
	/**/

	/*	local variable declaration	*/
	bool	restartOperator;	// used to loop entire program

	int		inputNumber,

			height,
			width;
	/**/


	do {

		/*	user input block	*/
		restartOperator = false;	// prevents loop from repeating endlessly if an error occurs
		inputNumber = 1;

		cout	<< " ### exercise 2 - multiplication table ### "
				<< "\n enter a number: ";	cin	 >> inputNumber;
		/**/

		if	(	inputNumber >= 1 && inputNumber <= 10) {
		/*	primary function block	*/
		for (	height	=	1;				// for-loop for y-axis
				height	<=	inputNumber;
				height++) {
			cout	<< "\n\t";

			for (	width	=	1;			// for-loop for x-axis
					width	<=	inputNumber;
					width++) {
				cout	<< iy * ix << "\t";
			}
		}
		/**/
		}	else {
			cout	<< "\n\t invalid input. only integers starting at 1 and ending at 10 are accepted."
					<< "\n\t and no, if you enter a float, I will not ask if you want to restart.";
		}


		/*	inquires user about restarting the program	*/
		restartOperator = queryRestartProgram();	// function queryRestartProgram(); located in nested_loops_exercise-header.hpp
		cls();										// clears console screen, function located in nested_loops_exercise-header.hpp
		/**/

	}	while (restartOperator == true);			// restarts program if the input for queryRestartProgram(); was "1"


	return 0;

}



/*	using C++ compiler from GCC via console

	compile for debug:
g++ -Og -pedantic-errors -Wall -Wextra nested_loops_exercise-2_alpha.cpp -o exe-nested_loops_exercise-2_alpha.debug

	clear console, compile as final executable, and run program:
clear && g++ -O3 nested_loops_exercise-2_alpha.cpp -o exe-nested_loops_exercise-2_alpha.release && ./exe-nested_loops_exercise-2_alpha.release

	name meaning:
*/
