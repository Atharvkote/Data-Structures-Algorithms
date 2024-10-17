#include<stdio.h>

void Print_Array(int a[10],int size)
{
printf("[ ");
	for(int i=0;i<size;i++){
	printf("%d ",a[i]);
	}
	printf(" ] ");
	printf("\n");
	printf("\n");
}

void Read_Array(int a[10],int size)
{
	for(int i=0;i<size;i++){
	printf(" a[%d] =",i);
	scanf("%d",&a[i]);
        }

}

int main (){
int a[10],size,temp,o,k;

printf("ENTER ARRAY SIZE\n ");
scanf("%d",&size);

Read_Array(a,size);

for(int i=1;i<size;i++)
{
	printf("Pass : %d\n",i);
	for(int j=0;j<i;j++)
	{
		if(a[j]>a[i])
		{
			temp=a[j];
			a[j]=a[i];

			for(k=i;k>j;k--)
			{
				a[k]=a[k-1];
			}
		a[k+1]=temp;
		}
}
Print_Array(a,size);
o=i;
}
printf("Number of Passes : %d\n",o);
return 0;
}
