// inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "nested_loops_exercise-header.hpp"



int main() {

	/*
	 * exercise 3 (right-angled triangle)
	 *	#
	 *	# #
	 *	# # #
	 *	# # # #
	 *	# # # # #
	 *
	 */

	/**/
	using	std::cout,
			std::cin;
	/**/

	/*	local variable declaration	*/
	bool	restartOperator;	// used to loop entire program

	int		inputNumber,
			executionNumber,	// used to determine amount of executions of inner for-loop

			height,
			width;
	/**/


	do {

		/*	user input block	*/
		restartOperator = false;	// prevents loop from repeating endlessly if an error occurs
		inputNumber = 1;
		executionNumber = 1;		// resets variable after looping program

		cout	<< " ### exercise 3 - right-angled triangle no.1 ### "
				<< "\n enter a number: ";	cin	 >> inputNumber;
		/**/

		if	(	inputNumber >= 1 && inputNumber <= 100) {
		/*	primary function block	*/
		for (	height	=	1;					// for-loop for y-axis
				height	<=	inputNumber;
				height++) {
			cout	<< "\n\t";

			for (	width	=	1;				// for-loop for x-axis
					width	<=	executionNumber;
					width++) {
				cout	<< "# ";
			}

			executionNumber++;
		}
		/**/
		}	else {
			cout	<< "\n\t invalid input. only integers starting at 1 and ending at 100 are accepted."
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
g++ -Og -pedantic-errors -Wall -Wextra nested_loops_exercise-3_bravo.cpp -o exe-nested_loops_exercise-3_bravo.debug

	clear console, compile as final executable, and run program:
clear && g++ -O3 nested_loops_exercise-3_bravo.cpp -o exe-nested_loops_exercise-3_bravo.release && ./exe-nested_loops_exercise-3_bravo.release

	name meaning:
*/
