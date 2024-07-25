#include <iostream>
using namespace std;

int main() {
    int x;

    // Assignment operator (=)
    x = 10; // Assigns 10 to x
    cout << "x = 10: " << x << endl;

    // Addition assignment operator (+=)
    x += 5; // Equivalent to x = x + 5
    cout << "x += 5: " << x << endl;

    // Subtraction assignment operator (-=)
    x -= 3; // Equivalent to x = x - 3
    cout << "x -= 3: " << x << endl;

    // Multiplication assignment operator (*=)
    x *= 2; // Equivalent to x = x * 2
    cout << "x *= 2: " << x << endl;

    // Division assignment operator (/=)
    x /= 4; // Equivalent to x = x / 4
    cout << "x /= 4: " << x << endl;

    // Modulus assignment operator (%=)
    x %= 3; // Equivalent to x = x % 3
    cout << "x %= 3: " << x << endl;

    // Bitwise AND assignment operator (&=)
    x = 6;  // Reset x to 6
    x &= 3; // Equivalent to x = x & 3
    cout << "x = 6; x &= 3: " << x << endl;

    // Bitwise OR assignment operator (|=)
    x = 6;  // Reset x to 6
    x |= 3; // Equivalent to x = x | 3
    cout << "x = 6; x |= 3: " << x << endl;

    // Bitwise XOR assignment operator (^=)
    x = 6;  // Reset x to 6
    x ^= 3; // Equivalent to x = x ^ 3
    cout << "x = 6; x ^= 3: " << x << endl;

    // Bitwise left shift assignment operator (<<=)
    x = 6;  // Reset x to 6
    x <<= 2; // Equivalent to x = x << 2
    cout << "x = 6; x <<= 2: " << x << endl;

    // Bitwise right shift assignment operator (>>=)
    x = 6;  // Reset x to 6
    x >>= 1; // Equivalent to x = x >> 1
    cout << "x = 6; x >>= 1: " << x << endl;

    return 0;
}
