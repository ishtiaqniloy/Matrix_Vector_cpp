#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

#include "Matrix.h"

using namespace std;


int main() {

    printf("Hello World\n");

    Matrix<double> A(3, 3);

    Matrix<double> B(3, 3);

    A.setVal(2, 2, 5);
    A.setVal(1, 1, 2);

    B.setVal( 1, 2, 9);

    Matrix<double > C = A+B-7.5;

    C.printMatrix();

    double **tempArr = new double *[3];
    for (int i = 0; i < 3; ++i) {
        tempArr[i] = new double[3];
        for (int j = 0; j < 3; ++j) {
            tempArr[i][j] = i+j;
        }
    }
    C.setValues(3, 3, tempArr);

    C.printMatrix();

    B = C.elementWiseProduct(A*5);
    B.printMatrix();



    return 0;
}