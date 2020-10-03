#include<stdio.h>
void insertion(int *rear,int *front,int queue[]);
void deletion(int *rear,int *front,int queue[]);
void display(int *rear,int *front,int queue[]);
void main()
{
    int rear = -1, front = -1, queue[5],ch;
    while(ch != 4)
    {
        printf("Enter the choice 1.insertion 2. deletion 3. display 4. exit: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
               insertion(&rear,&front,queue);
                break;
            }

        case 2:
            {
                deletion(&rear,&front,queue);
                break;
            }
        case 3:
            {
                display(&rear,&front,queue);
                break;
            }
        case 4:
            {
                break;
            }
        default:
            printf("enter a valid choice");


        }
    }
}
void insertion(int *rear,int *front,int queue[])
{
    if (*rear>=4)
    {
        printf("queue overflow");
        return;
    }
    else
        if(*front==-1)
        {
          *front=*front + 1;
          *rear = *rear + 1;
        }
        printf("enter the number you want to enter: ");
        scanf("%d",&queue[*rear]);
        (*rear)++;
}
void deletion(int *rear,int *front,int queue[])
{
    if (*front <= -1)
    {
        printf("queue underflow\n");
        return;
    }
    printf("element deleted %d\n",queue[*front]);



    if ( (*rear)-1 == *front)
    {
        *rear=-1;
        *front=-1;

    }
    else
    {

        (*front)++;
    }


}
void display(int *rear,int *front,int queue[])
{
    if (*front == -1)
        printf("QUEUE IS EMPTY");
    else

     printf("Elements in queue are: \n");
     for(int i = *front; i<*rear;i++)
     {
         printf("%d\n",queue[i]);
     }
    }




