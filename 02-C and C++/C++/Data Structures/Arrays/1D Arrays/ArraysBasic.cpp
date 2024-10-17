#include <iostream>
using namespace std;

int main() {
    // Creating an array

    int marks[50];  // Uninitialized array of size 50

    int numbers[] = {1, 2, 3};  // Array with initialized elements

    int moreNumbers[] = {4, 5, 6};  // Another array with initialized elements

    string fruits[] = {"apple", "mango", "orange"};  // Array of strings

    cout << marks[0] << endl;       // Accessing the first element of 'marks' (uninitialized, may contain garbage value)
    cout << numbers[0] << endl;     // Accessing the first element of 'numbers'
    cout << moreNumbers[0] << endl; // Accessing the first element of 'moreNumbers'
    cout << fruits[0] << endl;      // Accessing the first element of 'fruits'

    return 0;
}
