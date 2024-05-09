#include<stdio.h>
int top;
int size=5;
void push (int a[10]){
int num;
if(top==size){
printf("STACK OVERFLOW !!!!");
}
else {
printf("Enter A NUMBER ");
scanf("%d",&num);
top=-1;
a[top]=num;
printf("%d PUSHED to [%d] Index",num,top);
}
}
void pop(int a[10]){
if(top<0){
 printf("STCK UNDERFLOW !!!!");
}
else {
printf("Number TO DELETED is %d",a[top]);
top--;
}
}
int Full(){
if(top==size ){
return 0;
}
}
int Empty(){
if(top==-1){
return 1;
}
}
void main (){
int a[20],Choice;
printf("STACK OPERATION Menu\n1.PUSH\n2.POP\n3.Check Empty Or NOT\n4.Check FULL or NOT");
scanf("%d",&Choice );
int full_v=Full();
int epty_v=Empty();
switch(Choice){
case 1 : push(a);
break;
case 2 : pop(a);
break;
case 3 : 

    if(epty_v==1)
   {
   printf("STACK EMPTY!!!!!!");
   }
   else {
   printf("Some ELEMENT are Present !!!!!");
   }
break;
case 4 :
    if(full_v==0)
   {
   printf("STACK FULL!!!!!!");
   }
   else {
   printf("STACK is NOT FULL !!!!!");
   }
 break;
 default : printf("Invalid CHOICE ");
}
}
