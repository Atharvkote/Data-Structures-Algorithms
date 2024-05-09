#include<stdio.h>
#define max 10
int Queue[max];
int rare=-1;
int front =-1;
void PrintQueue()
{
if (rare ==front ){
printf("Queue EMPTY !!!!!");
}
else {
	printf("[ ");
	for(int i=front+1;i<=rare;i++){
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
if (rare==max-1)
printf("QUEUE IS FULL !!!!");

else {
rare++;
Queue[rare]=Num;

}
}
int D_Queue(){
if (rare==front)
printf("QUEUE IS EMPTY !!!!");

else {
int x;
front++;
x=Queue[front];
return x;
}
}

void main (){
int a[20],Choice,num,Choice_1;
do{
printf("STACK OPERATION Menu\n1.N-Queue\n2.D-Queue\n3.Check Empty Or NOT\n4.Check FULL or NOT\n5. Display Queue\n Your Choice : ");
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



