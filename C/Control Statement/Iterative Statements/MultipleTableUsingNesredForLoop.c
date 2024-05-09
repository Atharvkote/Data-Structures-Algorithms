#include <stdio.h>
int main()
{
    int i, j, k, a;
    printf("enter them number till you want tables");
    scanf("%d", &a);
    for (i =1; i < a + 1; i++)
    {
        printf("\tTable of %d\n", i);
        for (j = 1; j < 11; j++)
        {
            k = i * j;
            printf("\t\t%dx%d=%d\n", i, j, k);
        }
        printf("\n");
    }
    return 0;
}
