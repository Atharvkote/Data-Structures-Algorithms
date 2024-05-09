#include <stdio.h>

void Read_Array(int arr[20], int size)
{     // Function To Read Array 
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void Binary_Search(int arr[20], int size, int high, int low, int key) //Recurrive Function To Search Element
    if (low > high)
    {
        printf("Number Not Found\n");
        return;
    }
    int mid = (low + high) / 2; //Computing Mid 
    if (key == arr[mid])
    {

        printf("%d Found at index %d\n", key, mid);
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

int main()
{
    int arr[20], size, key;
    printf("Enter array size: ");
    scanf("%d", &size);
    Read_Array(arr, size);
    printf(" Enter number to search: ");
    scanf("%d", &key);
    Binary_Search(arr, size, size - 1, 0, key);   //Passing Value To function Binary Search
return 0;
}
