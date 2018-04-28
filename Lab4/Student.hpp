/*********************************************************************
** Author:Ryan Lew
** Date: 4/28/2018
** Description: Header file for the Student class, student is a subclass
**				of Person.
*********************************************************************/

#ifndef STUDENT_HPP
#define STUDENT_HPP
#include "Person.hpp"

class Student : public Person {

private:
	double gpa;

public:
	Student();
	Student(std::string name, double gpa);
	double getgpa();
	void setgpa(double gpa);
	void setName(std::string name);
	std::string getName();
	void do_work();
	virtual double getRating();

};
#endif // !STUDENT_HPP

