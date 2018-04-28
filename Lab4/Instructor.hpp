/*********************************************************************
** Author:Ryan Lew
** Date: 4/28/2018
** Description: Header file for the Instructor class, instructor is a subclass
**				of Person.
*********************************************************************/

#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP
#include "Person.hpp"

class Instructor : public Person {

private:
	double rating;

public:
	Instructor();
	Instructor(std::string name, double rating);
	void setName(std::string name);
	std::string getName();
	void setRating(double rating);
	double getRating();
	void do_work();
	virtual double getgpa();

};
#endif // !INSTRUCTOR_HPP
