#include <stdio.h>
#include <string.h>
int main()
{
    int len1, len2, m;
    char a[100];
    char b[100];
    char c[100];
    printf("Enter First String");
    scanf("%s", &a);
    printf("Enter Second String");
    scanf("%s", &b);

    printf(" • First String is %s\n", a);
    printf(" • Second string is %s\n", b);

    len1 = strlen(a); // Length Calculation
    len2 = strlen(b);
    printf(" • Length of First String is %d\n", len1);
    printf(" • Length  of Second String is %d\n", len2);
    strcat(a, b); //String Joining
    printf(" • Joined String is %s\n", a);
    strcpy(c, a); // String Copy
    printf(" • Copied String is %s\n", c);
    m = strcmp(a, b); //comparing String
    if (m == 0)
    {
        printf(" • String are Equal");
    }
    else
    {
        printf(" • String are Not Equal");
    }

    return 0;
}