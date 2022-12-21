#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Student : public Person
{
	string group;
public:
	Student(string name, int age, string group);

	void setGroup(string newGroup);
	string getGroup() const;
	virtual const string getInfo();

	friend ostream& operator<<(ostream& output, const Student* student);
};

