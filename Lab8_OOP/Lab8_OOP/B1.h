#pragma once
#include <iostream>
#include <string>
using namespace std;

// родительский

class B1
{
    string name;
public:
    B1()
    {
        this->name = "B1";
    }
    void show()
    {
        cout << this->name;
    }
};
