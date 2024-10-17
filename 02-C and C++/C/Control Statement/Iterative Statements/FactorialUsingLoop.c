#include <stdio.h>
int main()
{
    int fact = 1, i, a;
    printf("Enter your number");
    scanf("%d", &a);
    for (i = 1; i < a + 1; i++)
    {
        fact *= i;
    }
    printf("Factorial of %d is %d ", a, fact);
    return 0;
}