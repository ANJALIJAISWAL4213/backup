#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create()
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("Enter data or press -1 to exit\n");
    scanf(" %d",&x);
    if(x==-1)
    return 0;
    else
    {
        newnode->data=x;
        printf("Enter left child of %d\n",x);
        newnode->left=create();
        printf("Enter right child of %d\n",x);
        newnode->right=create();
    return newnode;
    }   
}
//whenever we call any function from main then memory is allocated in stack
int main()
{
    struct node* root;
    //root=0;
    root=create();
}