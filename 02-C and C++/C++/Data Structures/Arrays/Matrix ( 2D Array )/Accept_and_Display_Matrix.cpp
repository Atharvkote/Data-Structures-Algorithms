#include <iostream>
using namespace std;

int main() {
    int rows1, cols1;

    // Input dimensions of the matrices
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> rows2 >> cols2;
  
    // Declare matrices
    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];

    // Input elements for the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
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
