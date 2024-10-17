#include <stdio.h>
#include <math.h>

int decimalToBinary(int decimal) {
    int binary = 0;
    int remainder, placeValue = 1;

    while (decimal != 0) {
        remainder = decimal % 2;
        decimal /= 2;
        binary += remainder * placeValue;
        placeValue *= 10;
    }

    return binary;
}

int binaryToDecimal(int binary) {
    int decimal = 0, power = 0, remainder;

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, power);
        binary /= 10;
        power++;
    }

    return decimal;
}

int binaryAddition(int binary1, int binary2) {
    int sum = 0;
    int carry = 0;
    int placeValue = 1;

    while (binary1 > 0 || binary2 > 0 || carry > 0) {
        int bit1 = binary1 % 10;
        int bit2 = binary2 % 10;

        int bitSum = bit1 + bit2 + carry;
        sum += (bitSum % 2) * placeValue;

        carry = bitSum / 2;

        binary1 /= 10;
        binary2 /= 10;
        placeValue *= 10;
    }

    return sum;
}

int binaryMultiply(int multiplicand, int multiplier) {
    int product = 0;
    int bitIndex = 0;

    while (multiplier != 0) {
        int bit = multiplier % 10;

        if (bit == 1) {
            int decimalEquivalent = binaryToDecimal(multiplicand);
            decimalEquivalent <<= bitIndex;
            int binaryEquivalent = decimalToBinary(decimalEquivalent);
            product = binaryAddition(product, binaryEquivalent);
        }

        multiplier /= 10;
        bitIndex++;
    }

    return product;
}

int main() {
    int multiplicand, multiplier;

    printf("Enter Multiplicand (in Binary): ");
    scanf("%d", &multiplicand);

    printf("Enter Multiplier (in Binary): ");
    scanf("%d", &multiplier);

    int decimalMultiplicand = binaryToDecimal(multiplicand);
    int decimalMultiplier = binaryToDecimal(multiplier);
    int product = binaryMultiply(multiplicand, multiplier);
    int decimalProduct = binaryToDecimal(product);

    printf("Binary Multiplication Results:\n");
    printf("%d ( %d ) x %d ( %d ) = %d ( %d )\n", multiplicand, decimalMultiplicand, multiplier, decimalMultiplier, product, decimalProduct);

    return 0;
}
