#include <stdio.h>
int main()
{
    int fact = 1, i, a, v;
    do
    {
        printf(" • Enter your number Whose Factorial You Want To Calculate..");
        scanf("%d", &a);
        for (i = 1; i < a + 1; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d is %d\n ", a, fact);
        printf("》 If You Want to Continue [Press 0]");
        scanf("%d", &v);
    } while (v == 0);
    return 0;
}
