// inclusion of libraries
	#include <iostream>



bool queryRestartProgram() {

	bool	restartOperator = false;
	std::cout	<< "\n\n restart? (0/1): ";
	std::cin	>> restartOperator;

	if		(restartOperator == true)
		return true;
	else
		return false;

}


void cls() {		// cls, clear screen -  derived from system("cls")

	/*	string of special characters that will translate to a clear screen command in the console. should work on any OS.	*/
	std::cout	<<	"\033[2J\033[1;1H";
	/**/

}


void pause() {		// 						derived from system("pause")

	/*	use this block to pause progress in console, unpauses on pressing any button. cin.ignore(); may not always be necessary.	*/
	std::cin.ignore();
	std::cin.get();
	/**/

}


