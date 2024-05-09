#include <stdio.h>

float add()
{
    float a, b, c;
    printf("Enter Two Number");
    scanf("%f%f", &a, &b);
    c = a + b;
    printf("Addition is %f", c);
}
float sub()
{
    float a, b, c;
    printf("Enter Two Number");
    scanf("%f%f", &a, &b);
    c = a - b;
    printf(" Substraction is %f", c);
}
float multi()
{
    float a, b, c;
    printf("Enter Two Number");
    scanf("%f%f", &a, &b);
    c = a * b;
    printf("Multiplication is %f", c);
}

float div(float a, float b)
{
    float c;
    printf("Enter Two Number");
    scanf("%f%f", &a, &b);
    c = a / b;
    printf(" Division is %f", c);
}

void main()
{
    int a, b;
    printf("\t\tOperation Menu\n\t\t1.Addition\n\t\t2.Substraction\n\t\t3.Multiplication\n\t\t4.Division\n");
    scanf("\t\t%d", &a);
    switch (a)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        multi();
        break;
    case 4:
        div(a, b);
        break;
    default:
        printf("\t\tInvaild Input");
    }
}

