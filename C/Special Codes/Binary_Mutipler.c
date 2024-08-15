#include <stdio.h>
#include <math.h>

int decimalToBinary(int n) {
    int binary = 0;
    int rem, i = 1;

    while (n != 0) {
        rem= n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }

    return binary;
}

int binaryToDecimal(int binary) {
    int deci = 0, i = 0, rem;

    while (binary != 0) {
        rem = binary % 10;
        deci+= rem * pow(2, i);
        binary /= 10;
        i++;
    }

    return deci;
}

int binaryAddition(int bits_1, int bits_2) {
    int sum = 0;
    int carry = 0;
    int indx = 1;

    while (bits_1 > 0 || bits_2 > 0 || carry > 0) {
        int bit_A = bits_1 % 10;
        int bit_B = bits_2 % 10;

        int bit_Sum = bit_A + bit_B + carry;
        sum += (bit_Sum % 2) * indx;

        carry = bit_Sum / 2;

        bits_1 /= 10;
        bits_2 /= 10;
        indx *= 10;
    }

    return sum;
}

int binaryMultiply(int multiplicand, int multiplier) {
    int product = 0, bit_index = 0;

    while (multiplier != 0) {
        int bit = multiplier % 10;

        if (bit == 1) {
            
            int deci_equivalent = binaryToDecimal(multiplicand);
            deci_equivalent <<= bit_index; 
            int bin_equivalent = decimalToBinary(deci_equivalent);
            product = binaryAddition(product, bin_equivalent);
            
        }
        
        multiplier /= 10;
        bit_index++;
    }

    return product;
}

int main() {
    int multiplicand, multiplier;

    printf("  》 Enter Multiplicand ( In Binary ): ");
    scanf("%d", &multiplicand);

    printf("  》Enter Multiplier ( In Binary ): ");
    scanf("%d", &multiplier);

    int deci_equivalent_m=binaryToDecimal(multiplicand);
    int deci_equivalent_mx=binaryToDecimal(multiplier);
    int product = binaryMultiply(multiplicand, multiplier);
    int deci_equivalent_product=binaryToDecimal(product); 
    
    
    printf("\t● Binary Mutlipication Results....\n\t● [ %d ]( %d ) x [ %d ](%d) = [ %d ](%d)", multiplicand, deci_equivalent_m, multiplier, deci_equivalent_mx,product,deci_equivalent_product);

    return 0;
}