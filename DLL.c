#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
};
typedef struct node *NODE;
NODE root=0;
NODE insert_front(NODE);
NODE insert_rear(NODE);
NODE insert_pos(NODE);
NODE delete_front(NODE);
NODE delete_rear(NODE);
NODE delete_pos(NODE);
void display(NODE);
int main()
{
    int ch1=1,ch2,ch3,choice,choice1;
    while(ch1==1)
    {
        printf("Double linked list implementation\n");
        printf("1.Insertion implementation \n 2.Deletion implementation \n 3.Display\n Enter yuor choice:-\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("Insertion implementation\n");
        ch2=1;
        while(ch2==1)
        {
            printf("1.Insert at front \t 2.Insert at rear \t 3.Insert at specified position\n Select an operation\n");
            scanf("%d",&choice1);
            switch (choice1)
            {
            case 1: root=insert_front(root);
                break;
            case 2: root=insert_rear(root);
            break;
            case 3: root=insert_pos(root);
            break;
            default:printf("Wrong choice\n");
                break;
            }
            printf("Insert again? Yes-1 No-0");
            scanf("%d",&ch2);
        }
            break;
        case 2:
        {
        printf("Deletion implementation\n");
        }
        ch3=1;
        while(ch3==1)
        {
            printf("1.Delete at front \t 2.Delete at rear \t 3.Delete at specified position\n4.exit\n Select an operation\n");
            scanf("%d",&choice1);
            switch (choice1)
            {
            case 1: root=delete_front(root);
                break;
            case 2: root=delete_rear(root);
            break;
            case 3: root=delete_pos(root);
            break;
            default:printf("Wrong choice\n");
            }
        printf("Do want to delete further?\nYes-1\tNo-0");
        scanf("%d",&ch3);
        }
        case 3: display(root);
        break;
        case 4: exit(0);
        break;
        default:printf("Wrong choice\n");
        }
    
    printf("Do you want to continue doing operations\n YES-1  NO-0");
    scanf("%d",&ch1);
    }
}
NODE insert_front(NODE root)
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));
    temp->llink=temp->rlink=0;
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    if(root==NULL)
    {
        root=temp;
        return(root);
    }
    else
    {
        root->llink=temp;
        temp->rlink=root;
        root=temp;
        return(root);
    }
}
NODE insert_rear(NODE root)
{
    NODE temp,p;
    temp=(NODE)malloc(sizeof(struct node));
    temp->llink=temp->rlink=0;
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    if(root==NULL)
    {
        root=temp;
        return(root);
    }
    p=root;
    while(p->rlink!=NULL)
    {
            p=p->rlink;
    }
    p->rlink=temp;
    temp->llink=p;
    return(root);
}
NODE insert_pos(NODE root)
{
    int n,count=1;
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));
    temp->llink=temp->rlink=0;
    printf("Enter the data\n");
    scanf("%d",&temp->data);   
    printf("Enter the position where data have to be saved\n");
    scanf("%d",&n);
    NODE p=root,l;
    if((n==1)&&(root==0))
    { 
    root=temp;
    return(root);
    }
   
    if(n==1)
    {
        root->llink=temp;
        temp->rlink=root;
        root=temp;
        return(root);
    }
     while(count!=n)
    {
        l=p;
        p=p->rlink;
        count++;
    }
    if(p==0)
    {
        printf("invalid position\n");
        return(root);
    }
    l->rlink=temp;
    temp->llink=l;
    temp->rlink=p;
    p->llink=temp;
    return(root);
}
NODE delete_front(NODE root)
{
    NODE temp;
    temp=root;
    if(root==NULL)
    {
        printf("Nodes already empty\n");
    }
    else if(temp->rlink==0)
    {
        printf("Deleted data is %d",temp->data);
        free(temp);
        return(root);
    }
    else
    {
        root=root->rlink;
        root->llink=0;
        free(temp);
        return(root);
    }
}
NODE delete_rear(NODE root)
{
    NODE temp,l;
    temp=root;
    if(root==NULL)
    {
        printf("Nodes already empty\n");
    }
    else if(root->rlink==0)
    {
        printf("Deleted data is %d",temp->data);
        free(temp);
        root=0;
        return(root);
    }
    while(temp->rlink!=NULL)
    {
        temp=temp->rlink;
    }
    printf("Deleted node is %d\n",temp->data);
    l=temp->llink;
    free(temp);
    l->rlink=0;
    return(root);
}
NODE delete_pos(NODE root)
{
    NODE temp,temp1,temp2;
    int pos,i;
    if(root==0)
    {
    printf("No nodes in the list\n");
    return(root);
    }
    printf("Enter the position where node to deleted\n");
    scanf("%d",&pos);
    temp=root;
    if((pos==1)&&(root->rlink==0))
    {
    printf("Deleted data = %d\n",temp->data);
    free(temp);
    root=0;
    return(root);
    }
    if(pos==1)
    {
    printf("Deleted data = %d\n",temp->data);
    root=root->rlink;
    root->llink=0;
    free(temp);
    return(root);
    }
    for(i=1;i<pos;i++)
    temp=temp->rlink;
    if(temp==0)
    {
    printf("Invalid position\n");
    return(root);
    }
    temp1=temp->llink;
    temp2=temp->rlink;
    printf("Deleted data = %d\n",temp->data);
    temp1->rlink=temp2;
    temp2->llink=temp1;
    free(temp);
    return(root);
    
}
void display(NODE root)
{
    NODE temp;
    temp=root;
    if(root==NULL)
    {
        printf("list empty\n");
    }
    else
    {
        printf("List contents:-\n");
        for(temp=root;temp!=0;temp=temp->rlink)
        {
            printf("%d ",temp->data);
        }
    } 
    printf("\n");
}
