#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,*ptr,n;
    printf("Enter Number of  the USNs ->");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("Your memory is full \n");
    }
    printf("Enter the USN -> ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
      
    printf("Enter the USN are -> ");
    for(i=0;i<n;i++)
    {
        printf("%d \n",*(ptr+i));
    }
return 0;
}