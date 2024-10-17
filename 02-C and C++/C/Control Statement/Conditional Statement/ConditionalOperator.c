#include <stdio.h>
int main()

{
    int a, b;
    printf("Enter Your Age");
    scanf("%d", &a);
    (a >=18) ? printf("candidate is eligible for voting") : printf("candidate is not eligible for voting");
    return 0;
}