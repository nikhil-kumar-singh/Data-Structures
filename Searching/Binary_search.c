#include<stdio.h>
#define size 6
void binary_search(int arr[], int start, int end, int num)
{
    int mid;
    while(start<=end)
    {
        // Check if num is present at mid 
        mid=(start+end)/2;
        //mid = start + (end - start) / 2;
       
        // Check if x is present at mid 
        if(arr[mid]==num)
        {
            printf("Succesfully searched");
            break;
        }
        
        // If num is smaller, ignore right half        
        if(num<arr[mid])
        {
           end=mid-1;
        }
        // If num is greater, ignore left half 
        else
            start=mid+1;
    }

    return -1;
}

int main()
{
    int arr[size]={1,2,5,6,8,9};
    int num=8;
    binary_search(arr,0,size-1,num);
    return 0;
}
