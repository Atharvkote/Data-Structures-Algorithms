#include<stdio.h>
#include<stdlib.h>
struct Node {
   int data ;
   struct Node *next; 
   struct Node *prev;
    };
    
struct Node *head=NULL;
struct Node *temp;
 
void Display(){
         
       temp=head;
       printf("[ ");
       while(temp!=NULL){
           printf("%d ",temp->data);
           temp=temp->next;           
           }
           printf(" ]\n");
       }      
        
void main()
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
     
	if(head==NULL){
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
}
