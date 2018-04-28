/*********************************************************************
** Author:Ryan Lew
** Date: 4/28/2018
** Description: Header file for the University class, contains an array
**				of Person pointers and an array of building pointers.
*********************************************************************/

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
