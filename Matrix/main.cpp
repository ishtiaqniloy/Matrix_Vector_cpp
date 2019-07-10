#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

#include "Matrix.h"

using namespace std;


int main() {

    printf("Hello World\n");

    Matrix<double> A(3, 3);

    Matrix<double> B(3, 4);

    A.setVal(0, 0, 5);
    B.setVal( 1, 2, 9);

    Matrix<double > C = A+B-7.5;

    int tempArr[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            tempArr[i][j] = i+j;
        }
    }

//    C.setValues(3, 3, (int **)tempArr);

    C.printMatrix();



    return 0;
}