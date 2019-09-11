// C program to get intersection point of two linked list

#include <stdio.h>
#include <stdlib.h>

/* Linked list node */
struct Node {
	int data;
	struct Node* next;
};

/* Function to get the counts of node in a linked list */
int Count(struct Node* head);


//function to get the intersection point of two linked lists head1 and head2
int IntesectionNode(struct Node* head1, struct Node* head2)
{
	struct Node *list1=head1;
	struct Node *list2=head2;
	int c1 = Count(head1);
	int c2 = Count(head2);
	int d;


	if (c1 > c2) {
		d = c1 - c2;
		head1=list1;
		head2=list2;
	}
	else {
		d = c2 - c1;
		head1=list2;
		head2=list1;
	}

	struct Node* current1 = head1;
	struct Node* current2 = head2;
	int i;
	for(i=0;i<d;i++)
       {
        if(current1==NULL)
        {
             return -1;
        }
        current1=current1->next;
       }
 while(current1!=NULL && current2!=NULL)
 {
   if(current1==current2)
   {
       return current1->data;
   }
     current1=current1->next;
     current2=current2->next;
 }

}

// Function to get the counts of node in a linked list
int Count(struct Node* head)
{
	struct Node* current = head;
	int count = 0;

	while (current != NULL) {
		count++;
		current = current->next;
	}

	return count;
}

// Main Function

int main()
{
	/*
	Create two linked lists

	1st 1->3->7->22->25
	2nd 5->22->25

	22 is the intersection point
*/

	struct Node* newNode;
	struct Node* head1 = (struct Node*)malloc(sizeof(struct Node));
	head1->data = 5;

	struct Node* head2 = (struct Node*)malloc(sizeof(struct Node));
	head2->data = 1;

	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 3;
	head2->next = newNode;

	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 7;
	head2->next->next = newNode;

	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 22;
	head1->next = newNode;
	head2->next->next->next = newNode;

	newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = 25;
	head1->next->next = newNode;

	head1->next->next->next = NULL;

	printf("\n The node of intersection is %d \n", IntesectionNode(head1, head2));
return 0;
}
