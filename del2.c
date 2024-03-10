#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create(int x)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node* compare(struct node* head,int key)
{
    // int x;
    // printf("Enter data or press -1 to exit\n");
    // scanf("%d",&x);
    // if(x==-1)
    // return 0;
    // struct node *newnode=(struct node*)malloc(sizeof(struct node));
    // newnode->data=x;
    // printf("Enter left child of %d\n",x);
    // newnode->left=create();
    // printf("Enter right child of %d\n",x);
    // newnode->right=create();
    // return newnode;
    if(head==NULL)
    return create(key);
    else if(key<head->data)
    head->left=compare(head->left,key);
    else
    head->right=compare(head->right,key);
    return head;
}
void preorder(struct node* head)
{
    if(head==NULL)
    return;
    printf("%d ",head->data);
    preorder(head->left);
    preorder(head->right);
}
void inorder(struct node* head)
{
    if(head==NULL)
    return;
    inorder(head->left);
    printf("%d ",head->data);
    inorder(head->right);
}
void postorder(struct node* head)
{
    if(head==NULL)
    return;
    postorder(head->left);
    postorder(head->right);
    printf("%d ",head->data);
}
int main()
{
    struct node * head=NULL;
    int x=1;
    while(x)
    {

        int d;
        printf("Enter data\n");
        scanf("%d",&d);
        head=compare(head,d);
    printf("Press 1 to continue or press 0 to exit\n");
    scanf("%d",&x);
    }
    printf("Preorder\n");
    preorder(head);
    printf("\nInorder\n");
    inorder(head);
    printf("\nPostorder\n");
    postorder(head);
}