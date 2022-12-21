#include "Matrix.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

Matrix::Matrix(int rows, int columns, int** matrix) : rows(rows), columns(columns)
{
    this->matrix = matrix;
}

Matrix::Matrix(int rows, int columns, int min, int max) : rows(rows), columns(columns)
{
    this->matrix = createMatrix(rows, columns);
    fillMatrix(this->matrix, min, max);
}

int** Matrix::createMatrix(int rows, int columns)
{
    int** matrix = new int* [rows];

    for (int i = 0; i < rows; i++)
        matrix[i] = new int[columns];

    return matrix;
}

void Matrix::fillMatrix(int** matrix, int min, int max)
{
    int** endRowPtr = matrix + rows;
    for (int** rowPtr = matrix; rowPtr < endRowPtr; rowPtr++)
    {
        int* endColPtr = *rowPtr + columns;

        for (int* colPtr = *rowPtr; colPtr < endColPtr; colPtr++)
        {
            *colPtr = min + rand() % (max - min + 1);
        }
    }
}

Matrix* Matrix::operator*(int number)
{
    for (int row = 0; row < rows; row++)
    {
        for (int column = 0; column < columns; column++)
        {
            (*this).setMatrixValue(row, column, (*this).getMatrixValue(row, column) * number);
        }
    }
    return this;
}

int Matrix::getMatrixValue(int row, int column)
{
    return matrix[row][column];
}

void Matrix::setMatrixValue(int row, int column, int value)
{
    matrix[row][column] = value;
}

std::ostream& operator<<(std::ostream& output, const Matrix* matrix)
{
    string result;

    for (int row = 0; row < (*matrix).rows; row++)
    {
        for (int column = 0; column < (*matrix).columns; column++)
        {
            result += to_string((*matrix).matrix[row][column]) + "\t";
        }
        result += "\n";
    }

    return output << result;
}

bool Matrix::operator!=(Matrix* secondMatrix)
{
    if (this->rows != secondMatrix->rows || this->columns != secondMatrix->columns)
    {
        return true;
    }

    for (int row = 0; row < this->rows; row++)
    {
        for (int column = 0; column < this->rows; column++)
        {
            if (this->getMatrixValue(row, column) != secondMatrix->getMatrixValue(row, column))
            {
                return true;
            }
        }
    }

    return false;
}

bool Matrix::operator==(Matrix* secondMatrix)
{
    if (this->rows != secondMatrix->rows || this->columns != secondMatrix->columns)
    {
        return false;
    }

    for (int row = 0; row < this->rows; row++)
    {
        for (int column = 0; column < this->rows; column++)
        {
            if (this->getMatrixValue(row, column) != secondMatrix->getMatrixValue(row, column))
            {
                return false;
            }
        }
    }

    return true;
}

Matrix& Matrix::operator+=(Matrix* matrix)
{
    for (int row = 0; row < this->rows; row++)
    {
        for (int column = 0; column < this->rows; column++)
        {
            this->setMatrixValue(row, column, this->getMatrixValue(row, column) + matrix->getMatrixValue(row, column));
        }
    }

    return *this;
}