#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <vector>
#include "Vector.h"
#include "Vector.cpp"

using namespace std;

/*
    Составить описание класса для определения одномерных массивов
    целых чисел (векторов). Реализовать метод для замены всех чисел
    удовлетворяющих некоторому условия (выбрать условие самостоятельно) на
    определенное значение.
*/

int main()
{
    setlocale(LC_ALL, "rus");

    Vector* vect1 = new Vector();
    Vector* vect2 = new Vector(5);
    Vector* vect3 = new Vector(5, 2);

    cout << "Вектор1";
    vect1->PrintVector();

    cout << "Вектор2";
    vect2->PrintVector();

    cout << "Вектор3";
    vect3->PrintVector();

    cout << endl << "ReplaceByZero в действии" << endl;

    vect1->ReplaceByZero(7);
    cout << "Вектор1";
    vect1->PrintVector();

    vect2->ReplaceByZero(5);
    cout << "Вектор2";
    vect2->PrintVector();

    vect3->ReplaceByZero(1);
    cout << "Вектор3";
    vect3->PrintVector();
}
