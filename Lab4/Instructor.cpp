#include "Instructor.hpp"

Instructor::Instructor() {

	name = "";
	rating = 4.0;
	age = rand() % 43;
	
}

Instructor::Instructor(std::string name, double rating) {

	setName(name);
	setRating(rating);
	age = rand() % 43;
	

}

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

void Instructor::do_work() {

	std::cout << name << " graded papers for " << (rand() % 8) + 1 << " hours" << std::endl;

}
