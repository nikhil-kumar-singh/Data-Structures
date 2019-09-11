#include<stdio.h>
#define size 6

void linear_search(int arr[],int n,int num)
{
    int i;
    for(i=0;i<n;i++)
    {
         if(arr[i]==num)
         {
          printf("Element is present at index %d",i);
          return 1;
         }
    }
    return -1;
}

int main()
{
    int arr[size]={2,1,8,7,6,4};
    int num=6;
    linear_search(arr,size-1,num);
    return 0;
}
