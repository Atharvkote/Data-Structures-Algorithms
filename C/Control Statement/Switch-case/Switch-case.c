#include <stdio.h>
int main()
{
    int a;
    printf("Enter Number Between 1 and 7\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Sunday");

    case 2:
        printf("\nMonday");
        break;
    case 3:
        printf("\nTuesday");
        break;
    case 4:
        printf("\nWednesday");
        break;
    case 5:
        printf("\nThursday");
        break;
    case 6:
        printf("\nFriday");
        break;
    case 7:
        printf("\nSaturday");
        break;
    default:
        printf("\nInvalid Input ");
    }

    return 0;
}