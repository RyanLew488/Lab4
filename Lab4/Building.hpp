/*********************************************************************
** Author:Ryan Lew
** Date: 4/28/2018
** Description: Header file for the Building class.
**				
*********************************************************************/
#ifndef BUILDING_HPP
#define BUILDING_HPP
#include <string>

class Building {

private:
	std::string name;
	double size;
	std::string address;

public:
	Building();
	Building(std::string name, double size, std::string address);
	void setName(std::string name);
	void setSize(double size);
	void setAddress(std::string address);
	std::string getName();
	double getSize();
	std::string getAddress();

};
#endif // !BUILDING_HPP
