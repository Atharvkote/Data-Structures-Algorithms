#include<stdio.h>
void Read_Array(int arr[20], int size)
{     // Function To Read Array 
  printf("Enter A SORTED ARRAY !!!!!!!\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void Binary_Search(int arr[20], int size, int high, int low, int key) //Recurrive Function To Search Element
    {
    if (low > high)
    {
        printf("Number Not Found\n");
        return;
    }
    int mid = (low + high) / 2; //Computing Mid 
    if (key == arr[mid])
    {

        printf("Number Found at index %d\n", mid);
        return;
    }
    else if (key < arr[mid])
    {
        Binary_Search(arr, size, mid - 1, low, key);    //Recurrsive Caliing To function Binary Search
    }
    else
    {
        Binary_Search(arr, size, high, mid + 1, key);   //Recurrsive Caliing To function Binary Search
    }
}

void Linear_Search(int arr[10],int size,int key){
int i,num,Exit_num,Index_holder;
int dect_num=0;

   for(int i=0;i<size;i++){
 		if(arr[i]==key){
		dect_num++;
		Index_holder=i;
			}
  }
if(dect_num==0){
	printf("Match Not Found ^_^\n");

	}
	 else{
        	printf("Match Found of First %d At [%d] index\n",key,Index_holder);
	        printf("%d Occurred %d Time\n",key,dect_num);
	 }
}
int main()
{
    int arr[20], size, key,Choice,Exit_num;
    printf("Enter array size: \n");
    scanf("%d", &size);
    Read_Array(arr, size);
    printf(" Enter number to search: \n");
    scanf("%d", &key);
    do{
    printf("Searching Menu : \n\tBinary Search [PRESS 1]\n\tLinear Serach [PRESS 2]\n");
    scanf("%d", &Choice);
    switch(Choice){
    case 1: Binary_Search(arr, size, size - 1, 0, key);   //Passing Value To function Binary Search
    break;
    case 2 : Linear_Search(arr, size,key);
    break;
    default : printf("Invalid Choice \n");
    
    }
    printf("Operation Menu :\n\t[PRESS 1] To Continue Searching \n\t[PRESS 0] To Exit Searching\n ");
	 scanf("%d",&Exit_num);
    }while(Exit_num==1);
    return 0;
}

