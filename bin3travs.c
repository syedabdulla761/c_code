#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	int *lchild;
	int *rchild;
};
typedef struct node *NODE;
NODE root=0;
void create(NODE*);
void inoder(NODE);
void preorder(NODE);
void postorder(NODE);
int is_lchild(NODE*);
int is_rchild(NODE*);
void main()
{
	printf("Creation of a tree\n");
	root=(NODE)malloc(sizeof(struct node*));
	printf("Enter the root data\n");
	scanf("%d",&root->data);
	create(&root);
	printf("Tree traversal\n");
	printf("Preorder traversal\n");
	preorder(root);
	printf("\nInorder Traversal :\n");
	inorder(root);
	printf("\nPostorder Traversal :\n");
	postorder(root);
}
void create(NODE *root1)
{
	NODE temp,temp1;
	if(is_lchild(&(*root1)))
	{
		(*root1)->lchild=(NODE)malloc(sizeof(struct node*));
		temp=(*root1)->lchild;
		printf("Enter the data to be at lchild\n");
		scanf("%d",&temp->data);
		create(&temp);
	}
	else
		(*root1)->lchild;
	if(is_rchild(&(*root1)))
	{
		(*root1)->rchild=(NODE)malloc(sizeof(struct node*));
		temp1=(*root1)->rchild;
		printf("Enter the data to be at rchild\n");
		scanf("%d",&temp1->data);
		create(&temp1);
	}
	else
	  (*root1)->rchild=0;
	
}
int is_lchild(NODE *root2)
{
	int ch;
	printf("Do you want to create a lchild of %d\n YES-1\tNO-0\n",(*root2)->data);
	scanf("%d",&ch);
	if(ch==1)
	 return 1;
	else 
	 return 0;
}
int is_rchild(NODE *root2)
{
	int ch;
	printf("Do you want to create a rchild of %d\n YES-1\tNO-0\n",(*root2)->data);
	scanf("%d",&ch);
	if(ch==1)
	 return 1;
	else 
	 return 0;
}
void preorder(NODE root3)
{
	if(root3!=0)
	{
		printf("%d->",root3->data);
		preorder(root3->lchild);
		preorder(root3->rchild);
	}
}
void inorder(NODE root4)
 {
	if(root4!=0)
 	{
	    inorder(root4->lchild);
		printf("%d->",root4->data);
	    inorder(root4->rchild);
	}
}
void postorder(NODE root5)
{
	if(root5!=0)
	{
	    postorder(root5->lchild);
	    postorder(root5->rchild);
	    printf("%d->",root5->data);
    }
}


