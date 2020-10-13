/*Stack implementation using static array*/
#include<stdio.h>
#define CAPACITY 5 //Pre-processor macro
int stack[CAPACITY] , top=-1 , i;
void push(int);
int isFull(void);
void main()
{
    int ch , item;
    while(1)
    {
        printf("1.Push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.traverse\n");
        printf("5.Quit\n");

        printf("Enter your choice: \n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1 : printf("Enter an element :\n");
                     scanf("%d",&item);
                     push(item); 
                     printf("%d pushed\n",item);
            break;
            case 2 : item=pop();
                     printf("%d popped\n",item);
            break;
            case 3 : item=peek();
                     printf("%d is at top\n",item);
            break;
            case 4 : traverse();
            break;
            case 5 : exit(0);
            default:printf("Invalid input\n");
        }
    }
}
void push(int ele)
{
        if(isFull())
        {
            printf("stack overflow\n");
        }
        else
        {
            top++;
            stack[top]=ele;
        }
        
}
int isFull()
{
    if(top==CAPACITY-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop()
{
    if(isEmpty())
    {
        printf("Stack underflow\n");
    }
    else
    {
        return stack[top--];
    }
}
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek()
{
    if(isEmpty())
    {
        printf("Stack underflow\n");
    }
    else
    {
        return stack[top];
    }
}
int traverse()
{
    if(isEmpty())
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf("Stack contents: \n");
        for(i=0;i<=top;i++)
        {
            printf("%d \n",stack[i]);
        }
    }
    
}