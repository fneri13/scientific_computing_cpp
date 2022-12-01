#ifndef MATRIXHEADERDEF
#define MATRIXHEADERDEF
#include <iostream>
using namespace std;
#include "../Vector/Vector.hpp"

/*
* Class of matrices
*/
class Matrix{
    private:
        int mNumRows;
        int mNumCols;
        double** mData; //data stored in the matrix
    public:
        Matrix(const Matrix&);
        Matrix(int Rows, int Cols);
        int getNumRows() const;
        int getNumCols() const;
        ~Matrix();
        void printMatrix();
        void SetElementValue(int i, int j, double elem);
        Matrix& operator=(const Matrix& otherMatrix);
        Matrix operator+() const; 
        Matrix operator-() const; 
        Matrix operator+(const Matrix& otherMatrix) const; //binary operation +
        Matrix operator-(const Matrix& otherMatrix) const; //binary operation -
        Matrix operator*(double a) const; //scalar multiplication
        Vector operator*(Vector vec) const; //vector multiplication multiplication
        
        /* double& operator[](int i); //zero based indexing. return a reference 
        double CalculateNorm(int p=2) const; //calculate p-norm. 2-norm is default
        friend int length(const Vector& v); //friend function for vector length of a vector */ 
};


#endif