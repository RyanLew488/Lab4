#ifndef UNIVERSITY_HPP
#define UNIVERSITY_HPP
#include <string>
#include "Student.hpp"
#include "Instructor.hpp"
#include "Building.hpp"

class University {

private:
	int maxSize;
	std::string name;
	Building** bArr;
	Person** pArr;

public:
	University();
	~University();
	void getPersonInfo();
	void getBuildingInfo();
};


#endif // !UNIVERSITY_HPP
