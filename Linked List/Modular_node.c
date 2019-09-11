
// Given a singly linked list and a number k, find the last node whose n%k == 0, where n is the number of nodes in the list //////

#include<stdio.h>
#include<stdlib.h>

// Representation of a node
struct Node
{
	int data;
	struct Node* next;
};


// Function to insert node
void insert(struct Node **head, int data)
{
	struct Node* current=*head;
	struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
	if(current==NULL)
	{
		*head=newnode;
	}
	else
	{
      while(current->next!=NULL)
	  {
		current=current->next;
	  }
	 current->next=newnode;
	}
}


// Prints the contents of linked list
void print(struct Node *head)
{
	while(head!=NULL)
	{
	   printf(" %d",head->data);
	   head=head->next;
	}
}


// Function to find the Modular Node
void modularnode(struct Node* head,int k)
{
    int modularNode=0;
    int n=1;
    struct Node *current=head;

    //Corner cases
    if(k<=0 || head==NULL)
    {
        return NULL;
    }

    while(current!=NULL)
    {
       if(n%k==0)
           modularNode=current->data;
       n++;
       current=current->next;
    }

      printf("\nModular Node: %d",modularNode);
}



// Main Function
int main()
{
	int k=2;
	struct Node *head=NULL;
	insert(&head,10);
	insert(&head,30);
	insert(&head,60);
	insert(&head,05);
	insert(&head,23);
	print(head);
	modularnode(head,k);
	return 0;
}
