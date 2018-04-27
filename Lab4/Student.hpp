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
};
#endif // !STUDENT_HPP

