#include <stdio.h>
int main()
{
    int i, a, k, w;
    do
    {
        printf("Enter The Number Of Which Table You Want : ");
        scanf("%d", &a);
        printf("\t\t • Table of %d\n", a);
        for (i = 1; i < 11; i++)
        {
            k = a * i;
            printf("\t\t   %d x %d = %d\n", a, i, k);
        }
        printf("》 If You Want to Continue [Press 0]");
        scanf("%d", &w);
    } while (w == 0);
    return 0;
}