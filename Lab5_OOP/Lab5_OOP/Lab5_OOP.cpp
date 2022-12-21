#include "Matrix.h"
#include <iostream>
using namespace std;

int main()
{
    srand(time(nullptr));

    //создание матриц

    Matrix* matrix1 = new Matrix(3, 2, 1, 10);
    cout << "Matrix 1 3*2: \n";
    cout << matrix1;
    
    Matrix* newMatrix = *matrix1 * 5;
    cout << "\nNew matrix after Matrix1 * 5:\n";
    cout << newMatrix;

    //равенство

    Matrix* matrix2 = new Matrix(3, 3, new int* []
        {
            new int[] {1, 2, 3},
                new int[] {4, 5, 6},
                new int[] {7, 8, 9},
        });
    Matrix* matrix3 = new Matrix(3, 3, new int* []
        {
            new int[] {1, 2, 3},
                new int[] {4, 5, 6},
                new int[] {7, 8, 9},
        });
    cout << "Matrix 2\n" << matrix2;
    cout << "Matrix 3\n" << matrix3;

    bool isMatrixEqual = *matrix2 == matrix3;
    cout << "\nResult operation matrix2 == matrix3: " << isMatrixEqual;

    //неравенство

    Matrix* matrix4 = new Matrix(3, 3, new int* []
        {
            new int[] {1, 2, 3},
                new int[] {4, 5, 6},
                new int[] {7, 8, 9},
        });
    Matrix* matrix5 = new Matrix(3, 3, new int* []
        {
            new int[] {9, 9, 9,},
                new int[] {4, 5, 6},
                new int[] {7, 8, 9},
        });

    cout << "\nMatrix 4\n" << matrix4;
    cout << "Matrix 5\n" << matrix5;

    isMatrixEqual = *matrix4 != matrix5;
    cout << "\nResult operation matrix4 != matrix5: " << isMatrixEqual;
    
    //сложение

    *matrix2 += matrix3;
    cout << "\nMatrix 1 after matrix2 += matrix3\n" << matrix2;    

    return 0;
}