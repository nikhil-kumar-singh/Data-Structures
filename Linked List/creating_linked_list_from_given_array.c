
//  Given an array arr[] of size N. The task is to create linked list from the given array. //

#include<stdio.h>
#include<stdlib.h>

//Representation of a node
struct Node
{
   int data;
   struct Node *next;
};
// Function to insert node
void insert(struct Node **head,int data)
{
	 struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
	 newnode->data=data;
	 newnode->next=*head;
	 *head=newnode;
}

// Function to print node
void display(struct Node *head)
{
     while(head!=NULL)
	 {
		 printf(" %d",head->data);
		 head=head->next;
	 }
}

// Main function
int main()
{
    int arr[] = { 5,4,3,2,1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    struct Node *head =NULL;
    for(int i=n-1;i>=0;i--)
    {
		insert(&head,arr[i]);
	}
    display(head);
    return 0;
}
