#include<stdio.h>
#define max 5
int Queue[max];
int rare=-1;
int front =-1;
void PrintQueue()
{
if ( rare==-1&&front==-1){
printf(" CIRCULAR Queue EMPTY !!!!!\n");
}
else {
	printf("[ ");
	for(int i=front;i<=rare;i=(i+1)%max){
	printf("%d ",Queue[i]);
	}
	printf(" ]\n ");
}
}
int Full(){
if(rare==max-1 ){
return 0;
}
}
int Empty(){
if(rare == front ){
return 1;
}
}

void N_Queue(int Num){
if (rare==-1&&front==-1){
rare=0;
front=0;
Queue[rare]=Num;
}
else if ((rare+1)%max==front)
printf("CIRCULAR QUEUE IS FULL !!!!\n");

else {
rare=(rare+1)%max;
Queue[rare]=Num;
}
}

int D_Queue(){
if (rare==-1&&front==-1)
printf("CIRCULAR QUEUE IS EMPTY !!!!\n");

else if (front==rare){
printf("ELEMENT Deleted is %d\n",Queue[front]);
rare=-1;
front=-1;
}
else{
printf("ELEMENT Deleted is %d\n",Queue[front]);
front=(front+1)%max;
}
}
void main (){
int a[20],Choice,num,Choice_1;
do{
printf(" CIRCULAR QUEUE OPERATION Menu\n1.N-Queue\n2.D-Queue\n3.Check Empty Or NOT\n4.Check FULL or NOT\n5. Display Queue\n Your Choice : ");
scanf("%d",&Choice );
int full_v=Full();
int epty_v=Empty();
switch(Choice){
case 1 : 
printf("Enter Number To N-Queue : ");
scanf("%d",&num );
N_Queue(num);
break;
case 2 : D_Queue();
break;
case 3 : 

    if(epty_v==1)
   {
   printf("QUEUE EMPTY!!!!!!");
   }
   else {
   printf("Some ELEMENT are Present !!!!!");
   }
break;
case 4 :
    if(full_v==0)
   {
   printf("QUEUE FULL!!!!!!");
   }
   else {
   printf("QUEUE is NOT FULL !!!!!");
   }
 break;
 case 5 :
 PrintQueue();
 break;
 default : printf("Invalid CHOICE ");
}
printf("[PRESS 1] : To Continue \n [PRESS 0] : To EXIT \n Your Choice :\n");
scanf("%d",&Choice_1 );

}while(Choice_1==1);
}



