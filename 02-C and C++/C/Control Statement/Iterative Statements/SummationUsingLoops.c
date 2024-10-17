#include <stdio.h>
int main()
{
    int sum = 0, i, a;
    printf(" • Enter The Last Number Till You Want Sum : ");
    scanf("%d", &a);
    for (i = 1; i < a + 1; i++)
    {
        sum += i;
    }
    printf("SUM Of 1 To %d is %d ", a, sum);
    return 0;
}