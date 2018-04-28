/*********************************************************************
** Author:Ryan Lew
** Date: 4/28/2018
** Description: Implementation file for the student class has unused
**				functions of the instructor subclass so it can be instantiated.
*********************************************************************/

#include "Student.hpp"

Student::Student() {

	name = "";
	gpa = 3.0;
	age = rand() % 31;
	instructor = false;

}

Student::Student(std::string name, double gpa) {

	setName(name);
	setgpa(gpa);
	age = 18 + rand() % 13;
	instructor = false;

}

/**************************************************************************
** Getters and setters for the member variables of the Student Class
****************************************************************************/
void Student::setName(std::string name) {
	
	this->name = name;

}

std::string Student::getName() {

	return name;

}

void Student::setgpa(double gpa) {

	this->gpa = gpa;

}
double Student::getgpa() {

	return gpa;

}

void Student::do_work() {

	//rand will be seeded in main
	std::cout << name << " did " << (rand() % 10) << " hours of homework " << std::endl;

}

double Student::getRating() {
	//unused students should not have a rating.
	return 0.0;
}
 