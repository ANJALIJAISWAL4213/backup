//circular queue using array
#include<stdio.h>
int rear=-1,front=-1;
void push(int *arr,int n)
{
    // if(front==-1&&rear==-1)
    // {
    //     front=rear=0;
    //      printf("Enter data\n");
    //     scanf("%d",&arr[rear]);
    // }
     if((rear+1)%n==front)
    printf("Stack Overflow\n");
    else
    {
        if(front==-1)
        front++;
        rear=(rear+1)%n;
        printf("Enter data\n");
        scanf("%d",&arr[rear]);
    }
}
void pop(int n)
{

    if(front==-1)
    printf("Stack Underflow\n");
    else if(front==rear)
    front=rear=-1;
    else  
    front=(front+1)%n;
}
void peek(int *arr,int n)
{
    if(front==-1)
    printf("Stack Underflow\n");
    else
    printf("%d\n",arr[front]);
}
void display(int *arr,int n)
{
    if(front==-1)
    printf("Stack Underflow\n");
    int i=front;
    while(i!=rear)
    {
        printf("%d\n",arr[i]);
        i=(i+1)%n;
    }
    printf("%d\n",arr[rear]);
}
int main()
{
    int n;
    printf("Enter the size of stack\n");
    scanf("%d",&n);
    int arr[n];
    int ch=1;
    int choice;
    while(ch)
    {
        // clrscr();
    printf("1)push\n2)pop\n3)peek\n4)display\n5)exit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    if(choice==1)
    push(arr,n);
    else if(choice==2)
    pop(n);
    else if(choice==3)
    peek(arr,n);
    else if(choice==4)
    display(arr,n);
    else if(choice==5)
    break;
    // printf("Press 1 to continue and 0 to exit\n");
    // scanf("%d",&ch);
    }
}