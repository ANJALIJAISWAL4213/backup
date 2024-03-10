//circular queue using linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* front=NULL,*rear=NULL;
void enqueue()
{
    if(front==NULL&&rear==NULL)
    {
          struct node* head = (struct node *)malloc(sizeof(struct node));
          front=rear=head;
          printf("Enter data\n");
          scanf(" %d",&head->data);
          head->link=NULL;
    }
    else 
    {
        struct node* newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
          scanf(" %d",&newnode->data);
          newnode->link=NULL;
          rear->link=newnode;
          rear=rear->link;
    }
    rear->link=front;
}
void dequeue()
{
    if(front==NULL&&rear==NULL)
    {
          printf("Queue is empty\n");
    }
    else if(front==rear)
    {
         struct node* newnode = front;
         front=rear=0;
          free(newnode);
    }
    else 
    {
        struct node* newnode = front;
        front=front->link;
        rear->link=front;
          free(newnode);
    }
    
}
void display()
{
    struct node* temp=front;
    if(front==NULL&&rear==NULL)
    printf("Queue is empty\n");
    while(temp->link!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    printf("%d\n",temp->data);
}
int main()
{
    //struct node* head;
    int choice=1;
    int ch;
    while(choice)
    {
   printf("Enter your choice\n");
   printf("1 for enqueue\n");
   printf("2 for deenque\n");
  // printf("3 for peek\n");
   printf("3 for display\n");
   //printf("1 for enque\n");
   scanf("%d",&ch);
   if(ch==1)
   enqueue();
   if(ch==2)
   dequeue();
   if(ch==3)
   display();
   printf("Do you want to continue if yes then press 1 else press 0\n");
        scanf("%d",&choice);
    }
}