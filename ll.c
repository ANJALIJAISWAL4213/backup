#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
// struct node *create(struct node *head)
// {

//     head = (struct node *)malloc(sizeof(struct node));
//     printf("Enter a data\n");
//     scanf(" %d", &head->data);
//     head->link = NULL;
//     int choice;
//     struct node *temp = head;
//     struct node *newnode;
//     printf("Do you want to continue if yes then press 1 else press 0\n");
//     scanf("%d", &choice);
//     while (choice)
//     {
//         newnode = (struct node *)malloc(sizeof(struct node));
//         printf("Enter a data\n");
//         scanf(" %d", &newnode->data);
//         newnode->link = NULL;
//         temp->link = newnode;
//         temp = temp->link;
//         printf("Do you want to continue if yes then press 1 else press 0\n");
//         scanf("%d", &choice);
//     }
//     return head;
// }



struct node *create(struct node *head)
{
    struct node *temp = head;
    struct node *newnode;
    if(head==0)
    {
     head = (struct node *)malloc(sizeof(struct node));
    printf("Enter a data\n");
    scanf(" %d", &head->data);
    head->link = NULL;
    }
    else 
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter a data\n");
        scanf(" %d", &newnode->data);
        newnode->link = NULL;
        while(temp->link!=0)
        temp = temp->link;
        temp->link = newnode;
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


struct node* add_at_start(struct node* head)
{
   // struct node* temp=head;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf(" %d",&newnode->data);
    newnode->link=head;
    return newnode;
}

struct node* add_at_end(struct node* head)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data\n");
    scanf(" %d",&newnode->data);
    newnode->link=NULL;
    struct node* temp=head;
    while(temp->link!=0)
    temp=temp->link;
    temp->link=newnode;
    return head;
}
int main()
{
    //method1
//     struct node* head=0;
//     struct node* newnode;
//     struct node* temp;
//     int choice=1;
//     while(choice)
//     {
//         newnode=(struct node*)malloc(sizeof(struct node));
//         newnode->link=NULL;
//         printf("Enter data\n");
//         //int d;
//         scanf(" %d",&newnode->data);
//         if(head==0)
//         {
//             head=temp=newnode;
//         }
//         else
//         {
//             temp->link=newnode;
//             temp=temp->link;
//         }
//         printf("Do you want to continue if yes then press 1 else press 0\n");
//         scanf("%d",&choice);
//     }
//     temp=head;
//     while(temp!=0)
//     {
//         printf("%d\n",temp->data);
//         temp=temp->link;
//     }
//     newnode=(struct node*)malloc(sizeof(struct node));
//     printf("Enter data\n");
//     scanf(" %d",&newnode->data);
//     newnode->link=head;
//    temp=newnode;
//    head=newnode;
//     while(temp!=0)
//     {
//         printf("%d\n",temp->data);
//         temp=temp->link;
//     }
//  newnode=(struct node*)malloc(sizeof(struct node));
//     printf("Enter data\n");
//     scanf(" %d",&newnode->data);
//  newnode->link=NULL;
//  //temp=newnode;
//  temp=head;
//   while(temp->link!=0)
//     {
//         //printf("%d\n",temp->data);
//         temp=temp->link;
//     }
//  temp->link=newnode;
// temp=head;
//   while(temp!=0)
//     {
//         printf("%d\n",temp->data);
//         temp=temp->link;
//     }




//method 2
    // struct node *head = 0;
    // head = create(head);
    // print(head);




//method3
struct node* head=0;
    int choice=1;
while(choice)
    {
        head = create(head);
        printf("Do you want to continue if yes then press 1 else press 0\n");
        scanf("%d",&choice);
    }
    print(head);
    head=add_at_start(head);
    print(head);
    head=add_at_end(head);
    print(head);
    // head=add_at_end(head);
    // print(head);
}