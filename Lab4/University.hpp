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
	int getArraySize();
	void printPName();
	void getPersonInfo();
	void getBuildingInfo();
	void do_work(int choice);
};


#endif // !UNIVERSITY_HPP
