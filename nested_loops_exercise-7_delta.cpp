// inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "nested_loops_exercise-header.hpp"



int main() {

	/*
	 * exercise 7 (modulo & flags)
	 *	0 # 0 # 0
	 *	# 0 # 0 #
	 *	0 # 0 # 0
	 *	# 0 # 0 #
	 *	0 # 0 # 0
	 *
	 */

	/**/
	using	std::cout,
			std::cin;
	/**/

	/*	local variable declaration	*/
	bool	restartOperator,	// used to loop entire program
			character;			// defines which character is displayed by inner for-loop

		/*
		 * personal note: turns out I was wrong, lol
		 * the 7_alpha implementation is not a correct solution. it only works with either odd OR even numbers, not with both.
		 * in 7_charlie, I commented that I "greatly despise the fact that I need to use both flags *and* modulo".
		 *
		 * the 7_alpha implementation comes close to what seems to be the best solution.
		 * what is needed is a check of whether the width is odd or even,
		 * which is indeed most efficiently accomplished with the modulo operator.
		 *
		 * derp
		 *
		 */

	int		inputNumber,

			height,
			width;
	/**/


	do {

		/*	user input block	*/
		restartOperator = false;	// prevents loop from repeating endlessly if an error occurs
		inputNumber = 1;
		character = false;			// resets variable after looping program

		cout	<< " ### exercise 7 - using modulo and flags ### \n"
				<< " ###          my best solution.          ### "
				<< "\n enter a number: ";	cin	 >> inputNumber;
		/**/

		if	(	inputNumber >= 1 && inputNumber <= 100) {
		/*	primary function block	*/
		for (	height	=	1;
				height	<=	inputNumber;
				height++) {
			cout	<< "\n\t";

			for (	width	=	1;
					width	<=	inputNumber;
					width++) {

				if	(	character == false) {
					character = true;
					cout	<< "0 ";
				}
				else {
					character = false;
					cout	<< "# ";
				}
			}

			if	(	inputNumber % 2 == 0)	{					// triggers if
				if	(	character == true)	{character = false;}
				else						{character = true;}
			}
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
g++ -Og -pedantic-errors -Wall -Wextra nested_loops_exercise-7_delta.cpp -o exe-nested_loops_exercise-7_delta.debug

	clear console, compile as final executable, and run program:
clear && g++ -O3 nested_loops_exercise-7_delta.cpp -o exe-nested_loops_exercise-7_delta.release && ./exe-nested_loops_exercise-7_delta.release

	name meaning:
*/
