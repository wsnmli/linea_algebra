#include<iostream>

class Matrix {
    public:
    int rows, cols;
    double **matrix;

    Matrix(int r, int c) :rows(r), cols(c)
    {
        matrix = new double*[r];
        for(int i = 0; i<rows; i++)
            matrix[i] = new double[c];
    }

    void ouput() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                std::cout << matrix[i][j] << " ";
            } std::cout << std::endl;
        } std::cout << std::endl;
    }
};