#include <iostream>
#include <cstdlib>
#include <ctime>
#include "University.hpp" //contains Student.hpp Instructor.hpp Building.hpp
#include "helperFunctions.hpp"



int main() {

	srand(time(0));
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
		int worker = 0;
		
		switch (choice){

		case 1:
			OSU.getBuildingInfo();
			break;

		case 2:
			OSU.getPersonInfo();
			break;

		case 3:
			std::cout << "Please select who you would like to work" << std::endl;
			std::cout << "========================================" << std::endl;
			OSU.printPName();
			worker = iRangeValid("", 0, OSU.getArraySize() - 1);
			OSU.do_work(worker);
			break;

		case 4:
			cont = false;
			break;
		}
		
	}
	
	
}