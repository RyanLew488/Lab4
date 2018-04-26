#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>
#include <iostream>

class Person {

protected:
	std::string name;
	int age;

public:
	virtual void do_work();

};

#endif // !PERSON_HPP
