#include <stdio.h>

int main()

{
    int i, j, k, l;
    for (i = 0; i < 5; i++)
    {
        for (j = 4 - i; j > 0; j--)
        {
            printf(" ");
        }

        for (k = i; k >= 0; k--)
        {
            printf("%d", k);
        }

        for (l = 1; l <= i; l++)
        {
            printf("%d", l);
        }
        printf("\n");
    }

    return 0;
}
