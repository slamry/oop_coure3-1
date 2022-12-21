#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Student.h"
using namespace std;


int main()
{
    Student* student = new Student("Student", 20, "PIR-201");

    Employee* employee = new Employee("Employee", 45, "Secretary", 5);

    Person* persons[] = { employee, student, new Employee("Empl", 25, "Department head", 15) };

    // auto - автоматически определяет тип данных
    for (auto person : persons)
    {
        cout << person->getInfo() << endl;
    }

    getchar();
    return 0;
}