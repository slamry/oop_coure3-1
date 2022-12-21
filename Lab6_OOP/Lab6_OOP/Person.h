#pragma once
#include <iostream>
using namespace std;

class Person
{
    string name;
    int age;
public:
    //������������
    Person();
    Person(string name, int age);

    string getName() const;
    int getAge() const;

    // ��������. �������
    friend ostream& operator<<(ostream& output, const Person* person);
};

