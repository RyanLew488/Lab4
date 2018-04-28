#include <iostream>
#include "University.hpp" //contains Student.hpp Instructor.hpp Building.hpp
#include "helperFunctions.hpp"


int main() {

	University OSU;
	bool cont = true;
	
	
	while (cont == true) {
		int choice = 0;
		std::cout << "Please select what you would like to do \n" <<
					 "1: Print information about the buildings at Oregon State University\n" <<
					 "2: Print information about the staff and students at OSU\n" <<
					 "3: Choose a person to do work\n" <<
					 "4: Exit the program\n";

		std::cout << "Please enter your choice: ";
		choice = iRangeValid("",1,4);
		
		switch (choice){

		case 1:
			OSU.getBuildingInfo();
			break;
		case 2:
			OSU.getPersonInfo();
			break;
		case 3:
			break;
		case 4:
			cont = false;
			break;
		}
		
	}
	
	
}