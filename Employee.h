#pragma once
#include "Address.h"
class Employee
{
private:
	string name;
	Address address; 

public:

	void setName(string n);
	string getName();

	void setAddress(Address a);

	Address getAddress();

};

