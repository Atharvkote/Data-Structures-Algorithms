#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
struct Node *temp,*rear=NULL,*front=NULL,*newnode;


void N_Queue(){
    struct Node *newnode; 
    newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data You Want to Push: ");
    scanf("%d", &newnode->data);
    if(rear==NULL&& front==NULL){
        newnode->next=NULL;
        front=newnode;
        rear=newnode;
        rear->next=NULL;        
        }
        else{
            rear=newnode;
            newnode->next=NULL;
            rear=newnode;      
            }
    }
    
 void D_Queue(){
     int x;
     if(rear==NULL&& front==NULL){
         printf("Queue is Empty!!!");
         }
         else{
             temp=front;
             front=front->next;
             x=temp->data;
             free(temp);
             printf("Poped Element %d",x);
             }
     
     }
     void Display() {
    struct Node *temp;
    temp = front;
    printf("[ ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("]");
}
int main() {
    int ch;
    do {
        printf("\n\nQUEUE Operation:\n1. N Queue\n2. D Queue\n3. DISPLAY\n4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                N_Queue();
                break;
            case 2:
                 D_Queue();
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
