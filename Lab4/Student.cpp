#include "Student.hpp"

Student::Student() {

	name = "";
	gpa = 3.0;
	age = rand() % 31;

}

Student::Student(std::string name, double gpa) {

	setName(name);
	setgpa(gpa);
	age = rand() % 31;

}

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
 