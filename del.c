// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node* left;
//     struct node* right;
// };
// struct node* create()
// {
//     int x;
//     printf("Enter data or press -1 to exit\n");
//     scanf("%d",&x);
//     if(x==-1)
//     return 0;
//     struct node *newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=x;
//     printf("Enter left child of %d\n",x);
//     newnode->left=create();
//     printf("Enter right child of %d\n",x);
//     newnode->right=create();
//     return newnode;
// }
// void preorder(struct node* head)
// {
//     if(head==NULL)
//     return;
//     printf("%d",head->data);
//     preorder(head->left);
//     preorder(head->right);
// }
// void inorder(struct node* head)
// {
//     if(head==NULL)
//     return;
//     inorder(head->left);
//     printf("%d",head->data);
//     inorder(head->right);
// }
// void postorder(struct node* head)
// {
//     if(head==NULL)
//     return;
//     postorder(head->left);
//     postorder(head->right);
//     printf("%d",head->data);
// }
// int main()
// {
//     struct node * head=create();
//     printf("Preorder\n");
//     preorder(head);
//     printf("\nInorder\n");
//     inorder(head);
//     printf("\nPostorder\n");
//     postorder(head);
// }






#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* create(int key)
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=key;
    head->left=head->right=NULL;
    return head;

}
struct node* compare(struct node* head,int key)
{
    // int x;
    // printf("Enter data or press -1 to exit\n");
    // scanf("%d",&x);
    // if(x==-1)
    // return 0;
    if(head==0)
    return create(key);
    if(key<head->data)
    head->left=compare(head->left,key);
    else
    head->right=compare(head->right,key);
    return head;
    //struct node *newnode=(struct node*)malloc(sizeof(struct node));
    // newnode->data=x;
    // printf("Enter left child of %d\n",x);
    // newnode->left=create();
    // printf("Enter right child of %d\n",x);
    // newnode->right=create();
    //return newnode;
}
void preorder(struct node *head)
{
    if(head==0)
    return;
    printf("%d ",head->data);
    preorder(head->left);
    preorder(head->right);
}
void inorder(struct node *head)
{
    if(head==0)
    return;
    inorder(head->left);
    printf("%d ",head->data);
    inorder(head->right);
}
void postorder(struct node *head)
{
    if(head==0)
    return;
    postorder(head->left);
    postorder(head->right);
    printf("%d ",head->data);
}
int main()
{
    struct node *head=NULL;
    head=compare(head,10);
    head=compare(head,9);
    head=compare(head,11);
    head=compare(head,8);
    head=compare(head,12);
    printf("Preorder\n");
    preorder(head);
    printf("Inorder\n");
    inorder(head);
    printf("Postorder\n");
    postorder(head);
}
