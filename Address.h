#pragma once
#include <string>
#include <iostream>
using namespace std; 
class Address
{
private: 
	string street;
	string number;
	string city; 

public:
	// set, get
	void setStreet(string s);
	string getStreet();

	void setNumber(string no);
	string getNumber();

	void setCity(string c);
	string getCity();
	// functions

	// constructors 
	Address();
	Address(string s, string no, string c); 
};

