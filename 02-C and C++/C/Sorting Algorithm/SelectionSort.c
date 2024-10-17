#include<stdio.h>
void PrintArray(int a[10],int size)
{
printf("[ ");
	for(int i=0;i<size;i++){
	printf("%d ",a[i]);
	}
	printf(" ] ");
	printf("\n");
	printf("\n");
}

void ReadArray(int a[10],int size)
{
	for(int i=0;i<size;i++){
	printf(" a[%d] =",i);
	scanf("%d",&a[i]);
        }

}
int main (){
int a[10],size,temp,o,i;
printf("ENTER ARRAY SIZE ");
	scanf("%d",&size);
	
ReadArray(a,size);

for(int i=0;i<size-1;i++){
printf("Pass : %d\n",i+1);
for(int j=i+1;j<size;j++){
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}

PrintArray(a,size);
}
o=i;
}


printf("Number of Passes = %d",o+1);
return 0;
}

