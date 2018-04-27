#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP
#include <string>
#include "Student.hpp"
#include "Building.hpp"

class University {

private:
	std::string name;
	Building* bPtr;
	Person* pPtr;

public:
	University();

};


#endif // !UNIVERSITY_HPP
