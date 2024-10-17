#include <stdio.h>

void main()
{
    int i, n1, n2, LCM, GCD;

    printf("Values of n1 and n2 are ");
    scanf("%d%d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            GCD = i;
        }
    }
    LCM = (n1 * n2) / GCD;
    printf("GCD of %d and %d is %d\n", n1, n2, GCD);
    printf("LCM of %d and %d is %d", n1, n2, LCM);
}