#include <stdio.h>
int main()

{
    int temp, b, c;
    printf("enter value of a and b");
    scanf("%d%d", &a, &b);
    c = temp;
    temp = b; //Temporary Variable "c".....
    b = c;
    printf("value of a is %d", a);

    printf("\nvalue of b is %d", b);
    return 0;
}