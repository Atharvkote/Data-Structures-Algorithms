#include<stdio.h>
#include<stdlib.h>
struct Node {
   int data ;
   struct Node *next; 
   struct Node *prev;
    };
    
struct Node *head=NULL;
struct Node *temp;
     
void InsertAtStart(){
        struct Node *Newnode;
        temp=head;
       Newnode =(struct Node*)malloc(sizeof(struct Node));
        printf("Enter Data Fill : ");
        scanf("%d",&Newnode->data);
        Newnode->next=temp;
        temp->prev=Newnode;
        Newnode->prev=NULL;
        head=Newnode;   
        printf("Node Inserted !!!\n");  
        }
        
void InsertAtEnd(){
       struct Node *Newnode;
      Newnode =(struct Node*)malloc(sizeof(struct Node));
       printf("Enter Data Fill : ");
        scanf("%d",&Newnode->data);
       temp=head;
       while(temp->next!=NULL){
             temp=temp->next;
       }
       temp->next=Newnode;
       Newnode->prev=temp;
       Newnode->next=NULL;
       printf("Node Inserted !!!\n"); 
}        

void InsertAtPos(){
    struct Node *Newnode;
    Newnode =(struct Node*)malloc(sizeof(struct Node));
    int i=1,pos,count=0;
    temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
        }
     printf("Enter Position After You Wnat to Insert the Node : ");
     scanf("%d",&pos);
     if (pos>count+1 || pos<1){
         printf("Invalid Position ");
         }
      else{
          temp=head;
          while(i<pos-1){
              temp=temp->next;
              i++;
              }
        printf("Enter Number You Want To Insert At    %d Position :" ,pos);
        scanf("%d",&Newnode->data);
        Newnode->next=temp->next;
        Newnode->prev=temp;
        temp->next->prev=Newnode;
        temp->next=Newnode; 
        printf("Node Inserted !!!\n"); 
          }
    }
    
void DeleteAtStart(){

    if(head==NULL){
        printf("Singly Linked List is Empty !!!");
        }
    else{
        temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);  
        printf("Node Deleted !!!\n");
        }
    }    
    
void DeleteAtEnd(){
    struct Node *nextnode;
    temp=head;
    while(temp->next!=NULL){
       
        temp=temp->next;   
        nextnode=temp->next; 
        } 
        temp->next=NULL;
        free(nextnode);
        printf("Node Deleted !!!\n");
    }
void DeleteAtPos(){
    struct Node *nextNode;
    int i=1,pos,count=0;
    temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
        }
     printf("Enter Position After You Want to Insert the Node ");
     scanf("%d",&pos);
     if (pos>count+1|| pos<1){
         printf("Invalid Position ");
         }
      else
      {
          temp=head;
          while(i<pos-1){
              temp=temp->next;
              i++;
              }
          nextNode=temp->next;
          temp->next=nextNode->next;
          temp->next->prev=temp;
          free(nextNode);
          printf("Node Deleted !!!\n");
          }
    }
 
void Display(){
         
       temp=head;
       printf("[ ");
       while(temp!=NULL){
           printf("%d ",temp->data);
           temp=temp->next;           
           }
           printf(" ]\n");
       }
       
        
int main()
{
 	int ch,Num,w;
 	struct Node *Newnode;	
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
	Newnode->prev=NULL;
	}
	else{
	temp->next=Newnode;
	Newnode->prev=temp;
	temp=Newnode;
	}
  }
  printf("Created Linked List Is : ");
  Display();
 	do{
 	printf("Singly Linked List CURD Operation : \n1.Node Inseration At Start\n2.Node Inseration At End \n3.Node Inseration After a Position\n4.Node Deletion At Start \n5.Node Deletion At End\n6.Node Deletion After a Position\nOther Operation : \n7.Display\n");
 	scanf("%d",&ch);
 	
 	switch(ch){
 	    case 1 :
 	    InsertAtStart();
 	    break;
 	    case 2 :
 	    InsertAtEnd();
 	    break;
 	    case 3 :
 	    InsertAtPos();
 	    break;
 	    case 4 :
 	    DeleteAtStart();
 	    break;
 	    case 5 :
 	    DeleteAtEnd();
 	    break;
 	    case 6 :
 	    DeleteAtPos();
 	    break;   
 	    case 7 :
 	    Display();
 	    break;
 	    default : printf("Invalid Choice");
 	   }
 	   printf("PRESS [0] : To EXIT \nPRESS [1] : To CONTINUE\n");
 	   scanf("%d",&w);
 	   }while(w==1);
return 0;
}
