//queue using linked list
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node* next;
};
// struct node *head = NULL;
struct node *rear=NULL,*front=NULL;
void push()
{
    if (rear == NULL)
    {
        rear = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &rear->data);
        rear->next = NULL;
        front=rear;
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &temp->data);
        rear->next = temp;
        rear=temp;
        //front = temp;
        //rear=rear->next;
    }
}
void pop()
{
    if(front==NULL)
    printf("Stack underflow\n");
    else
    {
        struct node *del=front;
        if(front==rear)
        front=rear=NULL;
        else if(front->next!=NULL)
        front=front->next;
        if(del!=NULL)
        free(del);
    }
}
void peek()
{
    if(front==NULL)
    printf("Stack underflow\n");
    else
    {
        printf("%d\n",front->data);
    }  
}
void display()
{
    if(front==NULL)
    printf("Stack underflow\n");
    struct node *temp2=(struct node *)malloc(sizeof(struct node));
    temp2=front;
    while(temp2!=rear->next)
    {
        printf("%d\n",temp2->data);
        temp2=temp2->next;
    }
}
int main()
{
    int ch = 1;
    int choice;
    while (ch)
    {
        // clrscr();
        printf("1)push\n2)pop\n3)peek\n4)display\n5)exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        if (choice == 1)
            push();
        else if (choice == 2)
            pop();
        else if (choice == 3)
            peek();
        else if (choice == 4)
            display();
        else if (choice == 5)
            break;
    }
}