//stack using array
#include<stdio.h>
int top=-1;
void push(int *arr,int n)
{
    if(top==n-1)
    printf("Stack Overflow\n");
    else
    {
        top++;
        printf("Enter data\n");
        scanf("%d",&arr[top]);
    }
}
void pop()
{
    if(top==-1)
    printf("Stack Underflow\n");
    else
    top--;
}
void peek(int *arr,int n)
{
    if(top==-1)
    printf("Stack Underflow\n");
    else
    printf("%d\n",arr[top]);
}
void display(int *arr)
{
    if(top==-1)
    printf("Stack Underflow\n");
    for(int i=top;i>=0;i--)
    printf("%d\n",arr[i]);
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
    pop();
    else if(choice==3)
    peek(arr,n);
    else if(choice==4)
    display(arr);
    else if(choice==5)
    break;
    // printf("Press 1 to continue and 0 to exit\n");
    // scanf("%d",&ch);
    }
}