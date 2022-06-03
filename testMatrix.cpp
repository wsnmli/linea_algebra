#include <iostream>
#include "matrix.hpp"

using namespace std;

int main() {
    Matrix A(3, 3);
    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i==j) A.matrix[i][j] = 1;
            }
    }
    A.ouput();
}