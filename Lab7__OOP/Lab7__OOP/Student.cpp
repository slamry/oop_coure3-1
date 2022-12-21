#include "Student.h"
#include <iostream>
#include <string>
using namespace std;

Student::Student(string name, int age, string group) : Person(name, age)
{
    this->group = group;
}

void Student::setGroup(string newGroup) {
    group = newGroup;
}

string Student::getGroup() const
{
    return this->group;
}

//переопределение виртуального метода

const string Student::getInfo()
{
    string result = "\nName: " + this->getName() + "\nAge: " + std::to_string(this->getAge()) + "\nGroup: " + this
        ->getGroup();

    return result;
}

ostream& operator<<(ostream& output, const Student* student)
{
    return output << "Student:"
        << "\nName: " << student->getName()
        << "\nAge: " << student->getAge()
        << "\nGroup: " << student->getGroup() << endl;
}