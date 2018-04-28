/*********************************************************************
** Author:Ryan Lew
** Date: 4/28/2018
** Description: Header file for the Person class, Person is a parent
**				class no Person object should instantiated.
*********************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>
#include <iostream>

class Person {

protected:
	std::string name;
	int age;
	bool instructor;

public:
	virtual void do_work();
	virtual double getRating() = 0;
	virtual double getgpa() = 0;
	std::string getName();
	int getAge();
	bool getStatus();

};

#endif // !PERSON_HPP
