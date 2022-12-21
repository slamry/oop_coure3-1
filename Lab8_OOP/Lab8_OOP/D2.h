#include <iostream>
#include <string>
#include "D1.h"
using namespace std;

class D2 : private D1
{
    string name;
public:
    D2()
    {
        this->name = "D2";
    }
    void show()
    {
        cout << this->name << "\n|\n";
        D1::show();
    }
};
