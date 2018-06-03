#include<stdio.h>

struct Node
{
    int data;
    struct Node *left, *right;
}*node,*temp;

struct Root
{
    int count;
    struct Node *pointer;
}*root;

struct Node createRoot()
{
    root=(struct Root*) malloc(struct Root);
    root>count=o;
    root->pointer=NULL;
    return root->pointer;
}

void insertNode(struct Root *root)
{
    if(root->pointer==NULL)
    {
        temp=(struct Node*)malloc(struct Node);
        printf("Enter the node data: ");
        scanf("%d",temp->data);
        temp->left==NULL;
        temp->right==NULL;
        root->pointer=temp;
        root->count++;
    }
    else
    {
        if(x < root->pointer->data)
            insertNode(root->pointer->left)
        else
            insertNode(root->pointer->right)
    }
}

void preOrder(struct Root *root)
{
    if(root->pointer!=NULL)
    {
        printf("%d",root->pointer->data);
        preOrder(root->pointer->left);
        preOrder(root->pointer->right);
    }
}

void inOrder(struct Root *root)
{
    if(root->pointer!=NULL)
    {
        printf("%d",root->pointer->data);
        preOrder(root->pointer->left);
        preOrder(root->pointer->right);
    }
}

int main()
{
    int a;
    node=createRoot();
    printf("Enter 1 to insert node to tree");
    printf("Enter 2 to inorder transversal");
    printf("Enter 1 to preorder transversal");
    printf("Enter 1 to postorder transversal");



    switch (choice)
    {
    case 1
            printf("<<Enter 0 to exit insertion>>");
        while(node!=NULL)
        {
            printf("Enter new data to insert: ");
            insertNode(node);
        }
    }



}
