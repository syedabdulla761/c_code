
#include <stdio.h> 
#include <stdlib.h> 
typedef struct node* NODE;
NODE deleteNode(NODE,int);
NODE insert(NODE,int);
struct node
 { 
	int key; 
	NODE *left, *right; 
}; 
int main() 
{ 
    int num,i,ch=0,num1;
    printf("Enter no. of nodes\n");
    scanf("%d",&i);
	struct node* root = NULL; 
	while(ch!=i)
	{
	printf("enter data\n");
	scanf("%d",&num);
	root = insert(root, num); 
	ch++;
    }
	inorder(root); 
    printf("\nEnter the data to be deleted\n");
    scanf("%d",&num1);
    root=deleteNode(root,num1);
    printf("Modified tree\n");
    inorder(root);
	return 0; 
}
NODE newNode(int item) 
{ 
	struct node* temp = (NODE)malloc(sizeof(struct node)); 
	temp->key = item; 
	temp->left = temp->right = NULL; 
	return temp; 
} 


void inorder(NODE root) 
{ 
	if (root != NULL) { 
		inorder(root->left); 
		printf("%d ->", root->key); 
		inorder(root->right); 
	} 
} 

NODE insert(NODE node, int key) 
{ 
	
	if (node == NULL) 
		return newNode(key); 

	
	if (key < node->key) 
		node->left = insert(node->left, key); 
	else if (key > node->key) 
		node->right = insert(node->right, key); 

	
	return node; 
} 



NODE minValueNode(NODE node)
{
    struct node* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}
 
NODE deleteNode(NODE root, int key)
{
    // base case
    if (root == NULL)
        return root;
 
    // If the key to be deleted 
    // is smaller than the root's
    // key, then it lies in left subtree
    if (key < root->key)
        root->left = deleteNode(root->left, key);
 
    // If the key to be deleted 
    // is greater than the root's
    // key, then it lies in right subtree
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
 
    // if key is same as root's key, 
    // then This is the node
    // to be deleted
    else {
        // node with only one child or no child
        if (root->left == NULL) {
            NODE temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            NODE temp = root->left;
            free(root);
            return temp;
        }
 
        // node with two children: 
        // Get the inorder successor
        // (smallest in the right subtree)
        NODE temp = minValueNode(root->right);
 
        // Copy the inorder 
        // successor's content to this node
        root->key = temp->key;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}