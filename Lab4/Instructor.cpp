/*********************************************************************
** Author:Ryan Lew
** Date: 4/28/2018
** Description: Implementation file for the instructor class has unused
**				functions of the student subclass so it can be instantiated.
*********************************************************************/

#include "Instructor.hpp"

Instructor::Instructor() {
	//Default ctor, is not used
	name = "";
	rating = 4.0;
	age = rand() % 43;
	instructor = true;
	
}

Instructor::Instructor(std::string name, double rating) {

	setName(name);
	setRating(rating);
	age = 25 + rand() % 43;
	instructor = true;

}

/**************************************************************************
** Getters and setters for the member variables of the Instructor Class
****************************************************************************/
void Instructor::setName(std::string name) {

	this->name = name;

}

std::string Instructor::getName() {

	return name;

}
void Instructor::setRating(double rating) {

	this->rating = rating;

}

double Instructor::getRating() {

	return rating;

}

double Instructor::getgpa() {
	//unused instructors should not have a GPA 
	return 0.0;

}

void Instructor::do_work() {

	std::cout << name << " graded papers for " << (rand() % 8) + 1 << " hours" << std::endl;

}
