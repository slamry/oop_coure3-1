#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Student.h"
using namespace std;


int main()
{
    Person* person1 = new Person();
    cout << person1 << endl;

    Person* person2 = new Person("Valera", 20);
    cout << person2 << endl;
    
    Student* student = new Student("Sasha", 20, "PIR-201");
    cout << student << endl;
    student->setGroup("ASOIR-201");
    cout << student << endl;


    Employee* employee = new Employee("Mikhail", 30, "Secretary", 5);
    cout << employee << endl;
    employee->setPost("Department head");
    cout << employee << endl; // тернарный ниже
    cout << (employee->checkExperience(10) ? "work experience is enough" : "work experience is not enough") << endl;

    return 0;
}

