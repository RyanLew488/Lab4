#include <iostream>
#include "helperFunctions.hpp"


int main() {

	bool cont = true;

	while (cont == true) {
		int choice = 0;
		std::cout << "Please select what you would like to do \n" <<
					 "1: Print information about the buildings at Oregon State University\n" <<
					 "2: Print information about the staff and Students at OSU\n" <<
					 "3: Choose a person to do work\n" <<
					 "4: Exit the program\n";

		std::cout << "Please enter your choice: ";
		choice = iRangeValid("",1,4);
		
		if (choice == 1) {
			
		}

		else if (choice == 2) {

		}

		else if (choice == 3) {

		}

		else (choice == 4) {
			cont = false;
		}
	}
	
	std::cin.get();
}