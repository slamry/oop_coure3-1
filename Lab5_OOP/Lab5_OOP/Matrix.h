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
    //������������
    Matrix(int rows, int columns, int** matrix); //�������� � �������� ��������
    Matrix(int rows, int columns, int min, int max); //�������� � ��������

    //������ ��� ���������/��������� ��������
    int getMatrixValue(int row, int column);
    void setMatrixValue(int row, int column, int value);    

    // * - ���������
    Matrix* operator * (int number); //������� � ������ �� �������, ������� ����� ��������� �� �����
    bool operator == (Matrix* secondMatrix);
    bool operator != (Matrix* secondMatrix);
    Matrix& operator += (Matrix* matrix); 

    //�����, ��� ����� ������
    //friend = ��������. �������, ��� ����� ������ � ���������� � �������� �� �������������� private
    friend std::ostream& operator<<(std::ostream& output, const Matrix* matrix);
};
