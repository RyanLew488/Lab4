#ifndef INSTRUCTOR_HPP
#define INSTRUCTOR_HPP
#include "Person.hpp"

class Instructor : public Person {

private:
	double rating;

public:
	instructor();
	instructor(std::string name, double rating);
	void setName(std::string name);
	std::string getName();
	void setRating(double rating);
	double getRating();
	void do_work();

};
#endif // !INSTRUCTOR_HPP
