#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void push(){
    struct Node *newnode; 
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data You Want to Push: ");
    scanf("%d", &newnode->data);
    newnode->next = top;
    top = newnode;
}

void  pop(){
    if(top == NULL){
        printf("STACK UNDERFLOW !!!");
    }
    else {
        int x = top->data;
        struct Node *temp = top;
        top = top->next;
        free(temp);
        printf("Poped Element : %d",x);
    }
}

void Display() {
    struct Node *temp = top;
    printf("[ ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("]\n");
}

int main() {
    int ch;
    do {
        printf("\n\nSTACK Operation:\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                 pop();
                break;
            case 3:
                Display();
                break;
            case 4:
                printf("Operation Ended !!!\n");
                break;
            default:
                printf("Invalid Choice\n");
                break;
        }
    } while (ch != 4);
    return 0;
    }
