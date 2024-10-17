#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two integers
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Addition
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    // Subtraction
    int difference = a - b;
    cout << "Difference: " << difference << endl;

    // Multiplication
    int product = a * b;
    cout << "Product: " << product << endl;

    // Division
    if (b != 0) {
        int quotient = a / b;
        cout << "Quotient: " << quotient << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    // Modulus
    if (b != 0) {
        int remainder = a % b;
        cout << "Remainder: " << remainder << endl;
    } else {
        cout << "Modulus by zero is not allowed." << endl;
    }

    return 0;
}
