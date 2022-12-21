#pragma once
#include <iostream>

class Matrix
{
    const int rows;
    const int columns;
    int** matrix;

    void fillMatrix(int** matrix, int min, int max);
    int** createMatrix(int rows, int columns);

public:
    //конструкторы
    Matrix(int rows, int columns, int** matrix); //создание с заданным массивом
    Matrix(int rows, int columns, int min, int max); //создание с рандомом

    //методы для получения/установки значений
    int getMatrixValue(int row, int column);
    void setMatrixValue(int row, int column, int value);    

    // * - указатель
    Matrix* operator * (int number); //матрицу с ичслом не сложить, поэтому будет умножение на число
    bool operator == (Matrix* secondMatrix);
    bool operator != (Matrix* secondMatrix);
    Matrix& operator += (Matrix* matrix); 

    //вывод, исп поток вывода
    //friend = дружеств. функция, что имеет доступ к переменным и функциям со спецификатором private
    friend std::ostream& operator<<(std::ostream& output, const Matrix* matrix);
};
