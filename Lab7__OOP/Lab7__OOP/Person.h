#pragma once
#include <iostream>
using namespace std;

/*����������� ����� � C++ - ��� �����, � ������� ��������� ���� ��
���� ����� ����������� �������.*/

class Person
{
    string name;
    int age;
public:
    Person();
    Person(string name, int age);

    string getName() const;
    int getAge() const;
    virtual const string getInfo() = 0;

    friend ostream& operator<<(ostream& output, const Person* person);
};

