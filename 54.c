#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
void preorder(struct node* root)
{
    if(root==0)
    return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node* root)
{
    if(root==0)
    return;
    inorder(root->left);
     printf("%d ",root->data);
    inorder(root->right);
}
void postorder(struct node* root)
{
    if(root==0)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
struct node* create()
{
    int x;
    printf("Enter data or press -1 to exit\n");
    scanf("%d",&x);
    if(x==-1)
    return 0;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    printf("Enter data of left node of %d or press -1 to exit\n",x);
    newnode->left=create();
    printf("Enter data or right node of %d or press -1 to exit\n",x);
    newnode->right=create();
}
int main()
{
        struct node* head=create();
        printf("Preorder is\n");
        preorder(head);
        printf("\n");
        inorder(head);
        printf("\n");
        postorder(head);
}