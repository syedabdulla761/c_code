#include <stdio.h> 
#include <stdlib.h>
#include<ctype.h>
#include<math.h>
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};
typedef struct node *NODE;
float eval(NODE root);
NODE create_tree(char postfix[]);
NODE root=0;
void main()
{
    char postfix[20];
    float result;
    printf("Enter postfix expression: ");
    scanf("%s",postfix);
    root=create_tree(postfix);
    result=eval(root);
    printf("%f",result);
}
NODE create_tree(char postfix[])
{
    NODE stack[20],temp;
    char symbol;
    int i=0,j=0;
    for(i=0;(symbol=postfix[i])!=0;i++)
    {
    temp=(NODE)malloc(sizeof(NODE));
    temp->lchild=0;
    temp->rchild=0;
    temp->data=symbol;
    if(isalnum)
    {
        stack[++j]=temp;
    }
    else
    {
        temp->lchild=stack[--j];
        temp->rchild=stack[--j];
        temp=stack[++j];
    }
    }
    stack[--j];
}
float eval(NODE root)
{
    float num;
    switch (root->data)
    {
    case '+' : eval(root->lchild)+eval(root->rchild);
        break;
    case '-' : eval(root->lchild)-eval(root->rchild);
        break;
    case '*' : eval(root->lchild)*eval(root->rchild);
        break;
    case '/' : eval(root->lchild)/eval(root->rchild);
        break;
    case '^' : pow(eval(root->lchild),eval(root->rchild));
        break;
    
    default:
        if(isalnum(root->data))
        {
            printf("Enter the value of %c: ",root->data);
            scanf("%f",&num);
            return num;
        }
        else
        {
            return(root->data-'\0');
        }
        

    }
}