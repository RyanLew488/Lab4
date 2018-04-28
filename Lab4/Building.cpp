/*********************************************************************
** Author:Ryan Lew
** Date: 4/28/2018
** Description: Implementation file for the Building class.				
*********************************************************************/
#include "Building.hpp"

Building::Building() {

	name = "";
	size = 1000.0;
	address = "";

}

Building::Building(std::string name, double size, std::string address) {

	setName(name);
	setSize(size);
	setAddress(address);

}
/**************************************************************************
** Getters and setters for the member variables of the Building Class
****************************************************************************/

void Building::setName(std::string name) {

	this->name = name;

}

void Building::setSize(double size) {

	this->size = size;

}

void Building::setAddress(std::string address) {
	
	this->address = address;

}

std::string Building::getName() {

	return name;

}

double Building::getSize() {

	return size;

}

std::string Building::getAddress() {
	
	return address;

}
