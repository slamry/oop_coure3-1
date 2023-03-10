#include "Person.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

Person::Person()
{
    this->age = 0;
    this->name = "empty!";
}

Person::Person(string name, int age)
{
    this->name = name;
    this->age = age;
}


int Person::getAge() const
{
    return this->age;
}

string Person::getName() const
{
    return this->name;
}


ostream& operator<<(ostream& output, const Person* person)
{
    return output << "Person:"
        << "\nName: " << person->getName()
        << "\nAge: " << person->getAge() << endl;
}
