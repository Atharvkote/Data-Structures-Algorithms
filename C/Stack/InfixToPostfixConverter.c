#include <stdio.h>
#include <string.h>

char stack[5];
int size = 5;
int top = -1;

void push(char x) {
    if (top == size) {
        printf("STACK OVERFLOW !!!!");
    } else {
        top++;
        stack[top] = x;
    }
}

char pop() {
    if (top < 0) {
        printf("STACK UNDERFLOW !!!!");
        return '\0'; 
    } else {
        return stack[top--];
    }
}

int precedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '^')
        return 3;
    else
        return -1;
}

int main() {
    int i;
    char a[20], c;
    printf("ENTER AN INFIX EXPRESSION: ");
    scanf("%s", a);
    int length = strlen(a);
    for (i = 0; i < length; i++) {
        c = a[i];
        if (precedence(c) > 0) {
            while (top != -1 && precedence(stack[top]) >= precedence(c)) {
                printf("%c", pop());
            }
            push(c);
        } else if (c == ')') {
            char x = pop();
            while (x != '(') {
                printf("%c", x);
                x = pop();
            }
        } else if (c == '(') {
            push(c);
        } else {
            printf("%c", c);
        }
    }
    while (top != -1) {
        printf("%c", pop());
    }
return 0;
}
