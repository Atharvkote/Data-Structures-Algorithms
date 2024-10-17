#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d ", j);
            //this Code will print a 3x3 Matrix
        }
        printf("\n");
    }
}