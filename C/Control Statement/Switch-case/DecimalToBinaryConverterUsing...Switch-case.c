#include <stdio.h>
int main()
{
    int decimal_num, binary_num = 0, i = 1, remainder, base = 1, ch;
    printf("Menu of Code:\n1.Decimal to Binary Conversion\n2.Binary to Decimal Conversion \n");
    printf("Enter your choice:");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1: /* Decimal to /binary*/
        printf("Enter a decimal number: ");
        scanf("%d", &decimal_num);
        printf("\nThe decimal number is %d \n", decimal_num); // print the decimal
        while (decimal_num > 0)
        {
            remainder = decimal_num % 2;
            decimal_num /= 2;
            binary_num += remainder * i;
            i *= 10;
        }
        printf("Binary number: %d\n", binary_num);
        break;
    case 2:
        /*binary to decimal*/
        decimal_num = 0;
        printf("Enter a binary number with the combination of 0s and 1s \n");
        scanf(" %d", &binary_num);                        // accept the binary number (0s and 1s)
        printf("The binary number is %d \t", binary_num); // print the binary number
        while (binary_num > 0)
        {
            remainder = binary_num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */
            decimal_num = decimal_num + remainder * base;
            binary_num = binary_num / 10; // divide the number with quotient
            base = base * 2;
        }

        printf("\nThe decimal number is %d \t", decimal_num); // print the decimal
        break;
    default:
        printf("Wrong choice");
    }
    return 0;
}