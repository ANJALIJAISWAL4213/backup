//stack using linked list
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int data;
    struct node* next;
};
// struct node *head = NULL;
struct node *top=NULL;
void push()
{
    if (top == NULL)
    {
        top = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &top->data);
        top->next = NULL;
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d", &temp->data);
        temp->next = top;
        top = temp;
        //top=top->next;
    }
}
void pop()
{
    if(top==NULL)
    printf("Stack underflow\n");
    else
    {
        struct node *del=top;
        top=top->next;
        free(del);
    }
}
void peek()
{
    if(top==NULL)
    printf("Stack underflow\n");
    else
    {
        printf("%d\n",top->data);
    }  
}
void display()
{
    if(top==NULL)
    printf("Stack underflow\n");
    struct node *temp2=(struct node *)malloc(sizeof(struct node));
    temp2=top;
    while(temp2!=NULL)
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