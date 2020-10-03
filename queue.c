#include<stdio.h>
#define N 5
int queue [N];
int front = -1;
int rear = -1;
void enqueue()
{
    int x;
    printf("\nEnter Data\n");
    scanf("%d",&x);
    if(rear == (N-1))
        printf("Overflow");
    else if(front== -1 && rear== -1)
    {
        front=rear=0;
        queue[rear]=-x;

    }
    else
    {
        rear++;
        queue[rear]=x;
    }
    
}
void dequeue()
{
    if(front==-1 && rear==-1)
        printf("\nQueue is empty\n");
    else if(front==rear)
    {
        front=rear=-1;   
    }
    else
    {
        printf("\ndequeued element is %d\n",queue[front]);
        front++;
    }
}
int main()
{
   enqueue();
   enqueue();
   dequeue();
}