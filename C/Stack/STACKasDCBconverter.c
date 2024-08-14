#include<stdio.h>

int top = -1;
int size = 5;
int a[5];

void PrintArray(int a[5]) {
    printf("[ ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf(" ] ");
}

void push(int re) {
    if (top == size - 1) {
        printf("STACK OVERFLOW !!!!\n");
    } else {
        top++;
        a[top] = re;
        printf("%d PUSHED to [%d] Index\n", re, top);
    }
}

void main() {
    int a[5], deci, re;
    printf("Enter a decimal number: ");
    scanf("%d", &deci);

    while (deci > 0) {
        re = deci % 2;
        push(re);
        deci /= 2;
    }

    printf("Binary equivalents are\n");
    PrintArray(a);
}
