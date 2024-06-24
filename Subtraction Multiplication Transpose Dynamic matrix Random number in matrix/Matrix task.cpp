#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to create a dynamic matrix filled with random numbers
vector<vector<int>> createRandomMatrix(int rows, int cols)
{
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            matrix[i][j] = rand() % 10; // random number between 0 and 9
        }
    }
    return matrix;
}

// Function to print a matrix
void printMatrix(const vector<vector<int>>& matrix)
{
    for (const auto& row : matrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
}

// Function to add two matrices
vector<vector<int>> addMatrices(const vector<vector<int>>& a, const vector<vector<int>>& b)
{
    int rows = a.size();
    int cols = a[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

// Function to subtract matrix b from matrix a
vector<vector<int>> subtractMatrices(const vector<vector<int>>& a, const vector<vector<int>>& b)
{
    int rows = a.size();
    int cols = a[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    return result;
}

// Function to multiply two matrices
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& a, const vector<vector<int>>& b)
{
    int rows = a.size();
    int cols = b[0].size();
    int innerDim = b.size();
    vector<vector<int>> result(rows, vector<int>(cols, 0));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            for (int k = 0; k < innerDim; ++k)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

// Function to transpose a matrix
vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<vector<int>> result(cols, vector<int>(rows));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

int main()
{
    srand(time(0)); // Seed for random number generation

    int rows, cols;
    cout << "Enter the number of rows and columns for the matrix: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix1 = createRandomMatrix(rows, cols);
    vector<vector<int>> matrix2 = createRandomMatrix(rows, cols);

    cout << "Matrix 1:" << endl;
    printMatrix(matrix1);

    cout << "Matrix 2:" << endl;
    printMatrix(matrix2);

    vector<vector<int>> sumMatrix = addMatrices(matrix1, matrix2);
    cout << "Sum of Matrix 1 and Matrix 2:" << endl;
    printMatrix(sumMatrix);

    vector<vector<int>> diffMatrix = subtractMatrices(matrix1, matrix2);
    cout << "Difference of Matrix 1 and Matrix 2:" << endl;
    printMatrix(diffMatrix);

    if (rows == cols)   // For simplicity, ensuring multiplication only for square matrices
    {
        vector<vector<int>> productMatrix = multiplyMatrices(matrix1, matrix2);
        cout << "Product of Matrix 1 and Matrix 2:" << endl;
        printMatrix(productMatrix);
    }
    else
    {
        cout << "Multiplication not performed. Matrices are not square." << endl;
    }

    vector<vector<int>> transposeMatrix1 = transposeMatrix(matrix1);
    cout << "Transpose of Matrix 1:" << endl;
    printMatrix(transposeMatrix1);

    return 0;
}

