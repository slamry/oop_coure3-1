#include <iostream>
#include <string>
using namespace std;

class B2
{
    string name;
public:
    B2()
    {
        this->name = "B2";
    }
    void show()
    {
        cout << this->name;
    }
};
