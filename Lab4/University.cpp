/*********************************************************************
** Author:Ryan Lew
** Date: 4/28/2018
** Description: Implementation file for the university class it manually
**				instantiates the elements for the two arrays.
*********************************************************************/

#include "University.hpp"

University::University() {

	name = "Oregon State University";
	maxSize = 10;
	bArr = new Building*[maxSize];
	pArr = new Person*[maxSize];


	//Manually instantiating both building and Person objects

	bArr[0] = new Building("Adams Building",11168,"606 SW 15th St, Corvallis OR, 97331");
	bArr[1] = new Building("Ballard Extension Hall", 42250, "110 SW 26th St, Corvallis OR, 97331");
	bArr[2] = new Building("Beef Pole Barn", 1080, "3550 Campus Way, Corvallis OR, 97330");
	bArr[3] = new Building("Arnold Dining Center", 52225, "681 SW 26th St, Corvallis OR, 97331");
	bArr[4] = new Building("Asian & Pacific Cultural Center", 3438, "2695 SW Jefferson, Corvallis OR, 97330");
	bArr[5] = new Building("Sackett Hall", 137517, "2901 SW Jefferson Way, Corvallis OR, 97331");
	bArr[6] = new Building("Rosenfel Laboratory",3847 , "5501 NW Wanut Blvd, Corvallis OR, 97331");
	bArr[7] = new Building("Reed Lodge", 13299, "2950 SW Jefferson Way, Corvallis OR, 97331");
	bArr[8] = new Building("Hinsdale Wave Research Lab", 68211, "3550 SW Jefferson Way, Corvallis OR, 97331");
	bArr[9] = new Building("Callahan Hall", 71389, "Corvallis OR, 97331");

	pArr[0] = new Instructor("Adam Kong", 4.3);
	pArr[1] = new Student("Ryan Lew", 3.5);
	pArr[2] = new Student("Marcus Trufant", 4.0);
	pArr[3] = new Student("Gary Payron", 4.0);
	pArr[4] = new Student("Harry Akune", 3.0);
	pArr[5] = new Instructor("Shawn Kemp", 4.0);
	pArr[6] = new Student("Keynan Bailey", 3.5);
	pArr[7] = new Student("Soma Yukihira", 4.0);
	pArr[8] = new Student("Russell Wilson", 3.5);
	pArr[9] = new Student("John James", 2.5);
	
}

University::~University() {
	
	for (int i = 0; i < maxSize; i++) {
		delete bArr[i];
		delete pArr[i];
	}
	delete[] bArr;
	delete[] pArr;
}

int University::getArraySize(){

	return maxSize;

}

/*********************************************************************************
** Prints out every element in the person array with their relevant information
** chooses different functions based on whether the object is a student or instructor
**********************************************************************************/

void University::printPName() {
		
	for (int i = 0; i < maxSize; i++) {

		std::cout << "[ " << i << " ] "; 
		if (pArr[i]->getStatus()) {std::cout << "(Instructor) ";}
		else {std::cout << "(Student) ";}

		std::cout << pArr[i]->getName() << std::endl;

	}
}

/*********************************************************************************
** Prints out every element in the person array with their relevant information
**********************************************************************************/

void University::getPersonInfo() {

	std::cout << "---------- Info about students and faculty ----------\n";
	for (int i = 0; i < maxSize; i++) {
		std::cout << " Name: " << pArr[i]->getName() << " | Age: " << pArr[i]->getAge();

		if (pArr[i]->getStatus() == true) {
			std::cout << " | Rating: " << pArr[i]->getRating();
		}
		else {
			std::cout << " | GPA: " << pArr[i]->getgpa();
		}
		std::cout << std::endl;
	}

}

/*********************************************************************************
** Prints out every element in the building array with their relevant information
**********************************************************************************/

void University::getBuildingInfo(){

	std::cout << "---------- Facilities Information ----------\n";

	for (int i = 0; i < maxSize; i++) {

		std::cout << " Building Name: " << bArr[i]->getName() << " | Address: ";
		std::cout << bArr[i]->getAddress() << " | Square Footage: " << bArr[i]->getSize();
		std::cout << std::endl;
	}
}

//Passes the users numerical choice into the individual objects do_work() member function.
void University::do_work(int choice){
	
	pArr[choice]->do_work();

}
