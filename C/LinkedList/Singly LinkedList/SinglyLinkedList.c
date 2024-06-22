#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *temp;
void InsertAtStart() {
    struct Node *Newnode;
    Newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data for the new node: ");
    scanf("%d", &Newnode->data);
    Newnode->next = head;
    head = Newnode;
}

void InsertAtEnd() {
    struct Node *temp, *Newnode;
    Newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data for the new node: ");
    scanf("%d", &Newnode->data);
    Newnode->next = NULL;
    if (head == NULL) {
        head = Newnode;
        return;
    }
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = Newnode;
}

void InsertAtPos() {
    struct Node *temp;
    int i = 1, pos, count = 0;
    temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    printf("Enter Position Where You Want to Insert the Node: ");
    scanf("%d", &pos);
    if (pos > count + 1 || pos < 1) {
        printf("Invalid Position ");
    }
    else {
        temp = head;
        struct Node *Newnode;
        Newnode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter Number You Want To Insert At %d Position: ", pos);
        scanf("%d", &Newnode->data);
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        Newnode->next = temp->next;
        temp->next = Newnode;
    }
}

void DeleteAtStart() {
    struct Node *temp;
    if (head == NULL) {
        printf("Singly Linked List is Empty !!!");
    }
    else {
        temp = head;
        head = head->next;
        free(temp);
        printf("Node Deleted !!");
    }
}

void DeleteAtEnd() {
    struct Node *prevnode, *temp;
    temp = head;
    if (temp == NULL) {
        printf("Singly Linked List is Empty !!!");
        return;
    }
    if (temp->next == NULL) {
        head = NULL;
        free(temp);
        return;
    }
    while (temp->next != NULL) {
        prevnode = temp;
        temp = temp->next;
    }
    prevnode->next = NULL;
    free(temp);
    printf("Node Deleted !!");
}

void DeleteAtPos() {
    struct Node *temp, *nextNode;
    int i = 1, pos, count = 0;
    temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    printf("Enter Position Where You Want to Delete the Node: ");
    scanf("%d", &pos);
    if (pos > count || pos < 1) {
        printf("Invalid Position ");
    }
    else {
        temp = head;
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        nextNode = temp->next;
        temp->next = nextNode->next;
        free(nextNode);
        printf("Node Deleted !!");
    }
}

void Display() {
    struct Node *temp;
    temp = head;
    printf("[ ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("]");
}

int main() {
    int ch,Num;
    struct Node *Newnode;
    Newnode = (struct Node*)malloc(sizeof(struct Node));
    printf("First Create A Linked :\nEnter Number of Nodes You Want : ");
 	scanf("%d",&Num);
 	for (int i =1;i<=Num;i++){
 	Newnode=(struct Node *)malloc(sizeof(struct Node));
        printf("Enter Data as a Number : ");
        scanf("%d",&Newnode->data);
        Newnode->next=NULL;

	if(head==NULL)
	{
	head=Newnode;
	temp=Newnode;
	}
	else{
	temp->next=Newnode;
	temp=Newnode;
	}
  }
  printf("\n\nCreated Linked List Is : ");
  Display();
    do {
        printf("\n\n\nSingly Linked List CURD Operation : \n1. Node Insertion At Start\n2. Node Insertion At End \n3. Node Insertion After a Position\n4. Node Deletion At Start \n5. Node Deletion At End\n6. Node Deletion After a Position\n7. Display\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            InsertAtStart();
            break;
        case 2:
            InsertAtEnd();
            break;
        case 3:
            InsertAtPos();
            break;
        case 4:
            DeleteAtStart();
            break;
        case 5:
            DeleteAtEnd();
            break;
        case 6:
            DeleteAtPos();
            break;
        case 7:
            Display();
            break;
        case 8:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid Choice\n");
        }
    } while (ch != 8);
    return 0;
    }
