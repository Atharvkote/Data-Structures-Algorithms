#include<stdio.h>

// Function to perform binary addition of two binary numbers
int binaryAddition(int binary1, int binary2) {
    int result = 0;
    int carry = 0;
    int placeValue = 1;

    while (binary1 > 0 || binary2 > 0 || carry > 0) {
        // Extract the last bit of each binary number
        int bit1 = binary1 % 10;
        int bit2 = binary2 % 10;

        // Calculate the sum of bits and carry
        int sumBits = bit1 + bit2 + carry;

        // Determine the resulting bit at the current place value
        result += (sumBits % 2) * placeValue;

        // Update the carry for the next iteration
        carry = sumBits / 2;

        // Move to the next higher bit
        binary1 /= 10;
        binary2 /= 10;
        placeValue *= 10;
    }

    return result;
}

int main() {
    // Example binary numbers for testing
    int binary1 = 1011;  // Binary for 11 in decimal
    int binary2 = 1101;  // Binary for 13 in decimal

    // Perform binary addition
    int result = binaryAddition(binary1, binary2);

    // Output the result
    printf("The sum of %d and %d in binary is: %d\n", binary1, binary2, result);

    return 0;
}
