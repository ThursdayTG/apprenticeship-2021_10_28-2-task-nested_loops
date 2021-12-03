// inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "nested_loops_exercise-header.hpp"



int main() {

	/*
	 * exercise 6 (frame)
	 *	0 0 0 0 0
	 *	0 # # # 0
	 *	0 # # # 0
	 *	0 # # # 0
	 *	0 0 0 0 0
	 *
	 */

	/**/
	using	std::cout,
			std::cin;
	/**/

	/*	local variable declaration	*/
	bool	restartOperator;	// variable used to loop entire program
	int		inputNumber,

			horizontalBorder,
			height,
			width;
	/**/


	do {

		/*	user input block	*/
		restartOperator = false;	// prevents loop from repeating endlessly if an error occurs
		inputNumber = 1;

		cout	<< " ### exercise 6 - frame ### "
				<< "\n enter a number: ";	cin	 >> inputNumber;
		cout	<< "\n";
		/**/

		if	(	inputNumber >= 1 && inputNumber <= 100) {
		/*	primary execution block	*/
		cout	<< "\t";
		for (	horizontalBorder	=	0;				// for-loop for top border
				horizontalBorder	<	inputNumber + 2;
				horizontalBorder++) {
			cout	<< "0 ";
		}

		cout	<< "\n";
		for (	height	=	1;				// for-loop for y-axis
				height	<=	inputNumber;
				height++) {
			cout	<< "\t0 ";				// puts 0 at start of line

			for (	width	=	1;			// for-loop for x-axis
					width	<=	inputNumber;
					width++) {
				cout	<< "# ";
			}

			cout	<< "0\n";				// puts 0 at end of line and starts new line
		}

		cout	<< "\t";
		for (	horizontalBorder	=	0;				// for-loop for bottom border
				horizontalBorder	<	inputNumber + 2;
				horizontalBorder++) {
			cout	<< "0 ";
		}
		/**/
		}	else {
			cout	<< "  \t invalid input. only integers starting at 1 and ending at 100 are accepted."
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
g++ -Og -pedantic-errors -Wall -Wextra nested_loops_exercise-6_alpha.cpp -o exe-nested_loops_exercise-6_alpha.debug

	clear console, compile as final executable, and run program:
clear && g++ -O3 nested_loops_exercise-6_alpha.cpp -o exe-nested_loops_exercise-6_alpha.release && ./exe-nested_loops_exercise-6_alpha.release

	name meaning:
*/
