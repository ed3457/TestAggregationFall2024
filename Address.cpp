#include "Address.h"

void Address::setStreet(string s)
{
	street = s; 
}

string Address::getStreet()
{
	return street;
}

void Address::setNumber(string no)
{
	number = no;
}

string Address::getNumber()
{
	return number;
}

void Address::setCity(string c)
{
	city = c;
}

string Address::getCity()
{
	return city;
}

Address::Address():Address("Not set yet", "Not set yet", "Not set yet")
{
	/*setCity("Not set yet");
	setNumber("Not set yet");
	setStreet("Not set yet");*/
}

Address::Address(string s, string no, string c)
{

	setCity(s);
	setNumber(no);
	setStreet(c);
}
