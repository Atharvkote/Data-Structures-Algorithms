#include<stdio.h>

int main (){
int a[10],size,temp,o;
printf("ENTER ARRAY SIZE ");
scanf("%d",&size);
for(int i=0;i<size;i++){
printf("Enter Array At %d th Index",i);
scanf("%d",&a[i]);

}
for(int i=0;i<size-1;i++){
printf("Pass -%d\n",i+1);
for(int j=0;j<size-i-1;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("[ ");
for(int i=0;i<size;i++){
printf("%d ",a[i]);
}
printf(" ] ");
printf("\n");
printf("\n");
}
o=i;
}
printf("Number of Passes %d",o+1);
return 0;
}
