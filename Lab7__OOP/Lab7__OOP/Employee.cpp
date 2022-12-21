#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

Employee::Employee(string name, int age, string post, int workExperience) : Person(name, age)
{
    this->post = post;
    this->workExperience = workExperience;
}

void Employee::setPost(string newPost) {
    post = newPost;
}

string Employee::getPost() const
{
    return this->post;
}

int Employee::getExperience() const
{
    return this->workExperience;
}

bool Employee::checkExperience(int minWorkExp) {
    if (this->workExperience >= minWorkExp) {
        return true;
    }
    else {
        return false;
    }
}

//переопределение виртуального метода

const string Employee::getInfo()
{
    string result = "\nName: " + this->getName() + "\nAge: " + to_string(this->getAge()) +
        "\nPost: " + this->getPost() + "\nWork experience: " + to_string(this->getExperience());

    return result;
}

ostream& operator<<(ostream& output, const Employee* employee)
{
    return output << "Employee:"
        << "\nName: " << employee->getName()
        << "\nAge: " << employee->getAge()
        << "\nPost: " << employee->getPost()
        << "\nWork experience: " << employee->getExperience() << endl;
}