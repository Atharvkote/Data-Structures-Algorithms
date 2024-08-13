#include <iostream>
using namespace std;

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions of the matrices
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> rows2 >> cols2;

    // Check if matrices can be multiplied
    if (cols1 != rows2) {
        cout << "Matrices cannot be multiplied due to incompatible dimensions." << endl;
        return 1;
    }

    // Declare matrices
    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];

    // Input elements for the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    // Input elements for the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    // Initialize the product matrix to 0
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    // Multiply the matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the product matrix
    cout << "Product of the matrices:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
