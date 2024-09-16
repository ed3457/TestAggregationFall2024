#include "Employee.h"

void Employee::setName(string n)
{
	name = n;
}

string Employee::getName()
{
	return name;
}

void Employee::setAddress(Address a)
{
	address = a;

}

Address Employee::getAddress()
{
	return address;
}
