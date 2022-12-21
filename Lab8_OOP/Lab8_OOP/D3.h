#include <iostream>
#include <string>
#include "B2.h"
#include "D2.h"
using namespace std;

class D3 : public D2, private B2
{
    string name;
public:
    D3()
    {
        this->name = "D3";
    }

    void show()
    {
        cout << this->name << " -- ";
        B2::show();
        cout << "\n|\n";
        D2::show();
    }
};
