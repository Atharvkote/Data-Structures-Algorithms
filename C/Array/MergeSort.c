#include<stdio.h>
#define Max 20
int a[Max];
void Print_Array( int size){
printf("\t[ ");
for (int i=0;i<size;i++){
printf("%d ", a[i]);
}
printf("\t] ");
}

void Accept_array (int size){
printf("Enter A UnSorted Array\n");
for (int i=0;i<size;i++){
printf("a[%d] = ",i);
scanf("%d",&a[i]);
}
}
void conquer(int low ,int mid ,int high,int size){
int i=low;
int j=mid+1;
int k=low;
int b[20];
while(i<=mid&&j<=high){

if(a[i]<a[j]){
b[k]=a[i];
i++;
k++;

}
if(a[i]>a[j]){
b[k]=a[j];
j++;
k++;
}
if(j>high){
while(i<=mid){
b[k]=a[i];
i++;
k++;
}
}
if(i>mid){
while(j<=high){
b[k]=a[j];
j++;
k++;
}
}
}
for(int l=0;l<size;l++){
a[l]=b[l];
}
}

void divide ( int low , int high,int size){
int mid=(low+high)/2;
divide(low,mid,size);
divide(mid+1,high,size);
conquer(low,mid,high,size);
}

int main (){
int a[10],low,high,size;
printf("Enter A Array Size");
scanf("%d",&size);
Accept_array (size);
divide(0,size-1,size);
printf("Sorted Array ");
Print_Array(size);
return 0;
}
