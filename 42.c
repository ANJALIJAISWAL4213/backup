// #include<stdio.h>
// void enqueue(int *arr,int front,int rear)
// {
//     if(front==-1&&rear==-1)
//     {
//         front=rear=0;
//         printf("Enter data\n");
//         scanf("%d",&arr[rear]); 
//         //(rear)++;
//     }
//     else if(rear==9)
//     printf("Queue overflow\n");
//     else
//     {
//         printf("Enter data\n");
//         (rear)++;
//         scanf("%d",&arr[rear]);
//     }
// }
// void dequeue(int *arr,int front,int rear)
// {
//     if(front==-1&&rear==-1)
//     printf("Queue is empty\n");
//  else if(front==rear)
//     {
//         front=rear=-1;
//     }
//     else 
//     {
//         (front)++;
//     }
//}
// void display(int *arr,int front,int rear)
// {
//     if(front==-1&&rear==-1)
//     printf("Queue is empty\n");
//     else
//     {
//     for(int i=front;i<=rear;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
//     }
// }
// int main()
// {
//     int arr[10];
//     int choice=1;
//     int ch,front=-1,rear=-1;
//     while(choice)
//     {
//    printf("Enter your choice\n");
//    printf("1 for enqueue\n");
//    printf("2 for deenque\n");
//   // printf("3 for peek\n");
//    printf("3 for display\n");
//    //printf("1 for enque\n");
//    scanf("%d",&ch);
//    if(ch==1)
//    enqueue(arr,&front,&rear);
//    else if(ch==2)
//    dequeue(arr,&front,&rear);
//    else if(ch==3)
//    display(arr,front,rear);
//    else
//    printf("Wrong input\n");
//    printf("Do you want to continue if yes then press 1 else press 0\n");
//         scanf("%d",&choice);
//     }
// }




//method
#include<stdio.h>
#define N 10
int arr[N];
int front=-1,rear=-1;
void enqueue()
{
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        printf("Enter data\n");
        scanf("%d",&arr[rear]); 
        //(rear)++;
    }
    else if(rear==9)
    printf("Queue overflow\n");
    else
    {
        printf("Enter data\n");
        (rear)++;
        scanf("%d",&arr[rear]);
    }
}
void dequeue()
{
    if(front==-1&&rear==-1)
    printf("Queue is empty\n");
    else if(front==rear)
    {
        front=rear=-1;
    }
    else 
    {
        (front)++;
    }
    // else
    // printf("Queue is empty\n");
}
void display()
{
    if(front==-1&&rear==-1)
    printf("Queue is empty\n");
    else
    {
    for(int i=front;i<=rear;i++)
    {
        printf("%d\n",arr[i]);
    }
    }
}
int main()
{
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
   else if(ch==2)
   dequeue();
   else if(ch==3)
   display();
   else
   printf("Wrong input\n");
   printf("Do you want to continue if yes then press 1 else press 0\n");
        scanf("%d",&choice);
    }
}