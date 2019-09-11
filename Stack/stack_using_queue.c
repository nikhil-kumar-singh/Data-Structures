
// Stack implementation using queue

#include<stdio.h>
struct queue1
{
    int data;
    struct queue1 *next;
};

struct queue1 *front=NULL;
struct queue1 *rear=NULL;

struct queue2
{
    int data;
    struct queue2 *next;
};

struct queue2 *front=NULL;
struct queue2 *rear=NULL;


void enqueue1(int num)
{
    struct queue1 *newnode=(struct queue1*)malloc(sizeof(struct queue1));
    newnode->data=num;
    newnode->next=NULL;
    if(rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }

}

void enqueue2()
{

  struct queue2 *newnode=(struct queue2*)malloc(sizeof(struct queue2));
    newnode->data=num;
    newnode->next=NULL;
    if(rear==NULL)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }


}

void dequeue()
{
   if(front==NULL || front==rear)
   {
       free(front);

  while
   }


}

void push(int value)
{
 enqueue1(value);


}
void pop()
{
  dequeue();
}

int main
{
    push(10);
    push(20);
    push(30);
    pop();
    return 0;
}
