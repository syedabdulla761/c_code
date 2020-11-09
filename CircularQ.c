#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
void insert();
void delete();
int CQfull();
int CQempty();
void display();
int front=-1 ,rear=-1;
int Cqueue[SIZE];
int main()
{
    int option,a,ch=1;
    while(ch==1)
    {
        printf("Enter an option:\n 1.insert \n 2.delete\n 3.display \n 4.Exit\n");
        scanf("%d",&option);
        switch (option)
        {
        case 1 :
        
            insert();
            printf("%d element inserted\n",Cqueue[rear]);
            break;
        case 2 :
            delete();
            break;
        case 3 :
            display();
            break;
        case 4 :
            exit(0);
            break;
        default:
            break;
        }
        printf("\ncontinue? \n:");
        scanf("%d",&ch);
    }
}
void insert()
{
    int a;
    printf("Enter the number to be inserted: ");
    scanf("%d",&a);
    if(CQfull())
    {
        printf("Circular Q is full\n");
        return;
    }
    else if(front==-1 || rear==-1)
    {
        front=0,rear=0;
        Cqueue[rear]=a;
        return;
    }
    else if(rear==SIZE-1)
    {
        rear=0;
        Cqueue[rear]=a;
        return;
    }
    else
    {
     rear++;
     Cqueue[rear]=a;   
     return;
    }
}
int CQfull()
{
    if(rear==front-1 || front==0 && rear==SIZE-1 )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void delete()
{
    if(CQempty())
    {
        printf("Cqueue is empty\n");
        return;
    }
    if(front==rear)
    {
        printf("%d Element deleted\n",Cqueue[front]);
        front=-1 , rear=-1;
    }
    else if(front==SIZE-1)
    {
        printf("%d element deleted\n",Cqueue[front]);
        front=0;
    }
    else
    {
        printf("%d at front\n",Cqueue[front]);
        Cqueue[front++];
        printf("Element deleted\n");
    }
}

int CQempty()
{
    if(front==-1 || rear==-1)
    return 1;

    return 0;
}
void display()
{
    int i;
    if(CQempty())
    {
        printf("Cqueue empty\n");
        return;
    }
    else if(front<=rear)
    for(i=front;i<=rear;i++)
    {
    printf("%d\n",Cqueue[i]);
    }
    else 
    {
    for(i=front;i<=SIZE-1;i++)
    { 
        printf("%d\n",Cqueue[i]);
    }
    printf("\n\n");
    for(i=0;i<=rear;i++)
    {
        printf("%d\n",Cqueue[i]);
    }
    printf("\n\n");
    return;
    }
}

    