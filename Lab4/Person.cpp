#include "Person.hpp"

void Person::do_work() {
	//unused, pure virtual functinon.
}

std::string Person::getName() {

	return name;
}

int Person::getAge() {

	return age;

}

bool Person::getStatus() {

	return instructor;

}
