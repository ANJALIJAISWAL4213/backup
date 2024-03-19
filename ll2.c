#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *create(struct node *head)
{

    head = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data\n");
    scanf(" %d", &head->data);
    head->link = NULL;
    int choice;
    struct node *temp = head;
    struct node *newnode;
    printf("Do you want to continue if yes then press 1 else press 0\n");
    scanf("%d", &choice);
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter a data\n");
        scanf(" %d", &newnode->data);
        newnode->link = NULL;
        temp->link = newnode;
        temp = temp->link;
        printf("Do you want to continue if yes then press 1 else press 0\n");
        scanf("%d", &choice);
    }
    return head;
}
void print(struct node *head)
{
    struct node *temp = head;
    while (temp != 0)
    {
        printf(" %d\n", temp->data);
        temp = temp->link;
    }
}
int main()
{
    struct node *head = 0;
    head = create(head);
    print(head);
    // struct node*h1=head->link;
    // head->link=NULL;
    // struct node*h2=h1->link;
    // struct node*h3;
    // h1->link=head;
    // h3=h2->link;
    // h2->link=h1;
    //  h1=h3->link;
    // // h3->link=h2;
    // while(h1->link!=NULL)
    // {
    //     //  h1=h3->link;
    // h3->link=h2;
    // h2=h1->link;
    // h1->link=h3;
    // h3=h2->link;
    // h2->link=h1;
    //  h1=h3->link;
    // }
    // h3->link=h2;
    // h1->link=h3;
    //  print(h1);


    struct node *prev,*curr,*next;
    prev=0;
    curr=next=head->link;
    while(next!=0)
    {
        next=next->link;
        curr->link=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
}