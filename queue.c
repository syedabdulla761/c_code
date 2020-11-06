#include<stdio.h>
#define CAPACITY 10
void insert(int);
int delete(void);
int queue[10],front=-1 , rear=-1;
int main()
{
    int a,option,ch=1;
    
    while(ch==1)
    {
    printf("Enter option :- \n1.Insert \n 2.Delete \n 3.Display \n 4.Exit\n");
    scanf("%d",&option);
    
        switch (option)
        {
        case 1 :
            printf("Enter element to be entered: \n");
            scanf("%d",&a);
            insert(a);
            break;
        case 2 :
            delete();
            break;
            
        case 3 :
            display();
            break;
        case 4 :
            exit(0);
        default:
            break;
        }
        printf("Do you want to continue 1-Yes,0-No\n");
        scanf("%d",&ch);
    }
}
void insert(int a)
{
    if(rear==CAPACITY-1)
     {  
          printf("Queue is full \n");
          return;
     }
    else
    {
        queue[++rear]=a;
        printf("%d inserted \n",a);
        printf("%d added to queue\n",a);
    }
    if(front==-1)
      front++;
      return;
    
}
int delete()
{
    int a;
    if(front==-1)
    {
        printf("queue empty\n");
        return;
    }
    else
    {
        printf("%d element deleted\n",queue[front]);
        front++;
        return;
    }
}
int display()
{
    int i;
    if(front==-1)
    { printf("queue empty\n");
     return;
    }
    for(i=front;i<=rear;i++)
        printf("%d \n",queue[i]);
        return;
}