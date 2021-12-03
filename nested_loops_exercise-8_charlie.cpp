// inclusion of libraries
	#include <iostream>

// inclusion of files
	#include "nested_loops_exercise-header.hpp"



int main() {

	/*
	 * exercise 8 (fir tree)
	 *	    #
	 *	   ###
	 *	  #####
	 *	   ###
	 *	  #####
	 *	 #######
	 *	  #####
	 *	 #######
	 *	#########
	 *	    #
	 *	    #
	 *
	 */

	/**/
	using	std::cout,
			std::cin;
	/**/

	/*	local variable declaration	*/
	bool	restartOperator;	// variable used to loop entire program

	int		inputNumber,

			step,				// flag, named after prescriped pattern (up up down)
			subtractor,			// used to determine amount of whitespaces and hashsigns in respective for-loops

			height,
			widthSpace,
			widthHash;
	/**/


	do {

		/*	user input block	*/
		restartOperator = false;	// prevents loop from repeating endlessly if an error occurs
		inputNumber = 1;
		subtractor = 1;				// resets variable after looping program
		step = 0;					// resets variable after looping program

		cout	<< " ### exercise 8 - fir tree ### "
				<< "\n enter a number: ";	cin	 >> inputNumber;
		/**/

		if	(	inputNumber >= 1 && inputNumber <= 256) {
		/*	primary function block - tree	*/
		for (	height	=	1;
				height	<=	inputNumber;
				height++) {
			cout	<< "\n\t";

			if		(step == 0) {
				step = 1;						// step 0 -> step 1; executes step 1 in next iteration
				subtractor = inputNumber - 1;	// sets subtractor to starting value
			}
			else if	(step == 1) {
				step = step + 1;				// alternative way to write:	step += 1;
				subtractor = subtractor - 2;	// decrements subtractor by 2; decreases amount of whitespaces by 1, increases amount of hashigns by 2
			}
			else if	(step == 2) {
				step = step + 1;
				subtractor = subtractor - 2;	// alternative way to write:	subtractor -= 2;
			}
			else if	(step >= 3) {
				step = step - 2;
				subtractor = subtractor + 2;
			}

			if	(	inputNumber ==	3)	{subtractor++;}		// corrects issue with amount of spaces that occurs when inputNumber == 3
			for (	widthSpace	=	1;
					widthSpace	<	subtractor + 1;
					widthSpace	=	widthSpace + 2) {
				cout	<< " ";
			}

			if	(	inputNumber ==	3)	{subtractor--;}		// re-corrects subtractor for normal execution of widthHash loop
			for (	widthHash	=	0;
					widthHash	<	inputNumber - subtractor;
					widthHash	=	widthHash + 1) {
				cout	<< "#";
			}
		}
		/**/

		/*	secondary function block - stem	*/
		for (	height	=	1;
				height	<=	2;
				height++) {
			cout	<< "\n\t";

			if	(	inputNumber ==	3)	{inputNumber++;}	// adjusts inputNumber value to account for correction at primary widthSpace loop
			for (	widthSpace	=	1;
					widthSpace	<	(inputNumber / 2) + 1;
					widthSpace	=	widthSpace + 1) {
				cout	<< " ";
			}

			cout	<< "#";
		}
		/**/
		}	else {
			cout	<< "\n\t invalid input. only integers starting at 1 and ending at 256 are accepted."
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
g++ -Og -pedantic-errors -Wall -Wextra nested_loops_exercise-8_charlie.cpp -o exe-nested_loops_exercise-8_charlie.debug

	clear console, compile as final executable, and run program:
clear && g++ -O3 nested_loops_exercise-8_charlie.cpp -o exe-nested_loops_exercise-8_charlie.release && ./exe-nested_loops_exercise-8_charlie.release

	name meaning:
*/
