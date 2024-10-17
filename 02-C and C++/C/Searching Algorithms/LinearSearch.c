#include<stdio.h>
void ReadArray(int a[10],int size)
{
	for(int i=0;i<size;i++){
	printf(" a[%d] =",i);
	scanf("%d",&a[i]);
        }

}
	int main (){
	int a[10],size,i,num,Exit_num,Index_holder;
int dect_num=0;
	printf("ENTER ARRAY SIZE ");
	scanf("%d",&size);
	
	ReadArray(a,size);
do{
   printf("Enter Number You Want to Search\n");
   scanf("%d",&num);

   for(int i=0;i<size;i++){
 		if(a[i]==num){
		dect_num++;
		Index_holder=i;
			}
  }
if(dect_num==0){
	printf("Match Not Found ^_^\n");

	}
	 else{
        	printf("Match Found of First %d At [%d] index\n",num,Index_holder);
	        printf("%d Occurred %d Time\n",num,dect_num);
	    }
	 printf("[PRESS 1] To Continue \n[PRESS 0] To Exit\n ");
	 scanf("%d",&Exit_num);
}while(Exit_num==1);
return 0 ;
}
