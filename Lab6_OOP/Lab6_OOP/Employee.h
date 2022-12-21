#pragma once
#include <iostream>
#include "Person.h"
using namespace std;

class Employee : public Person 
{
	string post;
	int workExperience;
public:
	Employee(string name, int age, string post, int workExperience);

	void setPost(string newPost);
	string getPost() const;
	int getExperience() const;
	bool checkExperience(int minWorkExperience); //сравнение с заданным значением

	friend ostream& operator<<(ostream& output, const Employee* employee);
};

