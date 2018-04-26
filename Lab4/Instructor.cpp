#include "Instructor.hpp"

Instructor::instructor() {

	name = "";
	rating = 4.0;
	age = rand() % 43;
	
}

Instructor::instructor(std::string name, double rating) {

	

}

void setName(std::string name) {

	this->name = name;

}

std::string getName() {

	return name;

}
void Instructor::setRating(double rating) {

	this->rating = rating;

}

double Instructor::getRating() {

	return rating;

}

void Instructor::do_work() {

	std::cout << name << " graded papers for " << (rand() % 8) + 1 << " hours" << std::endl;

}
