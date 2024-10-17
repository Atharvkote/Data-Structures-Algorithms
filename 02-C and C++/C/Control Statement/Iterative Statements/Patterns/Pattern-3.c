#include <stdio.h>
#include <string.h>
int main()
{
    int a, i, j;
    char b[100]="AtharvaKote";
    
    a = strlen(b);

    for (i = 0; i <= a; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("   %c", b[j]);
        }
        printf("\n");
    }

    return 0;
}
