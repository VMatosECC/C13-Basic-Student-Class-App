
// SINGLE-COMPILATION UNIT STYLE 
//----------------------------------------------------
#pragma once
#include <string>
#include <sstream>
#include <iomanip>
#include <iostream>
using namespace std;

class Student
{
private:
	//data members
	string name;
	int    section;

public:
	//Mutators
	void setName(string value)
	{
		//TODO.  value = titleCap(value);
		name = value;
	}

	void setSection(int value)
	{
		if (value > 999 || value < 100)
		{
			value = 999;
		}
		section = value;

	}

	//Accessors
	string getName() { return name; }
	int    getSection() { return section; }

	//Constructors
	Student()
	{
		setName("n.a.");
		setSection(999);
	}

	Student(string nameValue, int sectionValue)
	{
		setName(nameValue);
		setSection(sectionValue);
	}

	//User-defined Methods
	string toString()
	{
		ostringstream sout;
		sout << this << " Student[ Name: " << this->getName()
			<< ", Section: " << this->getSection() << " ]";
		return sout.str();
	}
};

