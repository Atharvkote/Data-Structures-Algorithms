#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter value of the side of trinagle ");
    scanf("%d%d%d", &a, &b, &c);

    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)
    {
        printf("Given Trinagle is Right Angled Triangle");
    }

    else if (a * a > b * b + c * c || b * b > c * c + a * a || c * c > b * b + a * a)
    {
        printf("Given Trinangle is Obtuse angled Triagle ");
    }
    else
    {
        printf("Given Triangle is Acute Angled Triangle ");
    }
    if (a == b && b == c)
    {
        printf("And Equilateral Triangle aslo");
    }

    else if (a == b || b == c || a == c)
    {
        printf(" And Isoceles Triangle also");
    }
    else
    {
        printf(" And Scalar Triangle");
    }
}
