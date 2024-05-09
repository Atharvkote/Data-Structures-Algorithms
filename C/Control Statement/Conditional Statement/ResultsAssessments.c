
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    float f, g;
    printf("\n\t\t\t●| |RESULT| | ●");
    printf("\n  Enter EM-1 marks");
    scanf("%d", &a);
    printf("  Enter EC marks");
    scanf("%d", &b);
    printf("  Enter BXE marks");
    scanf("%d", &c);
    printf("  Enter BEE marks");
    scanf("%d", &d);
    printf("  Enter CFP marks ");
    scanf("%d", &e);
    f = a + b + c + d + e;
    g = (f * 100) / 500;
    printf(" • Total Agregratte marks obtained out off 500 : %.1f", f);
    printf("\n • Precentage : %.2f ", g);

    if (g > 75)
    {
        printf("\n • Remark :Frist class with distingustion");
    }
    else if (74 > g && g > 65)
    {
        printf("\n • Remark : Frist class");
    }
    else if (64 > g && g > 54)
    {
        printf("\n • Remark : Higher Second class");
    }

    else if (54 > g && g > 45)
    {
        printf("\n •  Remark : Lower second class");
    }

    else
    {
        printf("\n • Remark : Kangaroolation Tum Fail ho..!!!");
    }
    return 0;
}