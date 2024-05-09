#include <stdio.h>
#include <string.h>
#define max 20
char stack[max];
int top = -1;

void push(char x) {
    if (top == max) {
        printf("STACK OVERFLOW !!!!");
    } else {
        top++;
        stack[top] = x;
    }
}

char pop() {
    if (top < 0) {
        printf("STACK UNDERFLOW !!!!");
        return'\0' ; 
    } else {
    char x=stack[top];
    top--;
        return x;
    }
}

int isPair(char c1 ,char c2){

if (c1=='{' && c2=='}')
 	return 1;
else if (c1=='[' && c2==']')
 	return 1;
else if (c1=='(' && c2==')')
 	return 1;
else {
   return 0;
}
}

int isBalanced(char *text){
int i ;
int length =strlen(text);
for (i=0;i<length;i++){
if(text[i]=='('||text[i]=='['||text[i]=='{'){
push(text[i]);
}
else if(text[i]==')'||text[i]==']'||text[i]=='}'){
   if (top==-1)
      return 0;

   else if (!isPair(pop(),text[i])){
  	return 0;
	}
    }
}
if(top==-1)
	return 1 ;
else
	return 0;

}

void main (){
char text [max];
printf("ENTER PARENTHSIS EXPRESSION  : ");
scanf("%s",text);
if (isBalanced(text)==1)
printf("Expresion Balanced !!!!!!!");
else {
printf("Expression UnBalanced !!!!!!!");
}
}
