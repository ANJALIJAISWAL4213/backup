//C3_Review_Test_ITP
// #include <stdio.h>
// int main()
// {
//     int num=73,k;
//     k=(num>50?(num<=10?100:200):500);
//     printf("%d",k);
//     return 0;
// }



// #include <stdio.h>
// int a,b,c=0;
// void fum(int a,int b)
// {
//     // static int c=2;
//      a+=3;
//     // printf("$%d\n",c);
// }
// int main()
// {
//     printf("%d %d ",a,b);
//     static int a=2;
//     a+=2;
//     fum(a,b);
//     printf("%d %d",a,b);
//     fum(a,b);
//     return 0;
// }



// #include <stdio.h>
// int fibo(int n)
// {
//     if(n<=1)
//     return n;
//     return fibo(n-1)+fibo(n-2);
// }
// int main()
// {
//     int n=6;
//     printf("%d",fibo(n));
// }




// Fibonacci Series using Recursion
// #include <stdio.h>
// int fib(int n)
// {
//     if (n <= 1)
//         return n;
//     return fib(n - 1) + fib(n - 2);
// }
 
// int main()
// {
//     int n = 9;
//     printf("%dth Fibonacci Number: %d", n, fib(n-1));
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int x=1,y=5;
//     printf("%d %d\n",x,y);
//     x++;y++;
//     printf("%d %d\n",x,y);
//     x=y++;
//     printf("%d %d\n",x,y);
//     y=x++;
//     printf("%d %d\n",x,y);
//     x=++y;
//     printf("%d %d\n",x,y);
//     y=++x;
//     printf("%d %d\n",x,y);
// }



// #include <stdio.h>
// int fact(int n)
// {
//     if(n==0)
//     return 1;
//     return n*fact(n-1); 
// }
// void main()
// {
//     int n=5;
//     printf("%d",fact(n));
// }



// #include <stdio.h>
// int main()
// {
//     char ch;
//     int a,b;
//     scanf("%c %d %d",&ch,&a,&b);
//     switch(ch)
//     {
//         case '+':
//         printf("%d",a+b);
//         break;
//         case '-':
//         printf("%d",a-b);
//         break;
//         case '*':
//         printf("%d",a*b);
//         break;
//         case '/':
//         printf("%d",a/b);
//         break;
//         default:
//         printf("Wrong input");
//         break;
//     }
//     return 0;
// }


// #include <stdio.h>
// #define n 5
// void too(int a[],int k)
// {
//     for(int i=0;i<k-1;i++)
//     a[a[i]]=a[i]+1;
//     // for(int i=0;i<n;i++)
//     // printf("%d ",a[i]);
// }
// int main()
// {
//     int a[n];
//     a[0]=1;
//     too(a,n);
//     for(int i=0;i<n;i++)
//     printf("%d ",a[i]);
//     // scanf("%d",&arr[i]);
//     // too(arr,n);
//     return 0;
// }



// #include <stdio.h>
// int Foo(int a[],int n)
// {
//     //int n;
//     for(int i=0;i<n-1;++i)
//     a[i]+=a[i+1];
// }
// void main()
// {
//     int a[5]={1,2,4,6,8};
//     Foo(a,4);
//     printf("%d",a[2]);
// }




// #include <stdio.h>
// unsigned int Hoo(unsigned  int n)
// {
//     // int x;
//     if(n==0)
//     return 0;
//     else
//     {
//     //   unsigned int x=  Hoo(n/2)+n%2;
//     //   printf("%u",x);
//     return Hoo(n/2)+n%2;
//     }
// }
// void main()
// {
//     unsigned int nMax=16,sum=0,n=0;
//     for(; n<nMax;n++)
//     {
//         unsigned int x=Hoo(n);
//         printf("%d %u\n",n,x);
//         sum+=x;
//     }
//     printf("Sum=%u\n",sum);
// }




// #include <stdio.h>
// int main()
// {
//     char *ch[4]={"north","east","south","west"};
//     for(int i=0;i<4;i++)
//     printf("%s",*ch[i]);
// }


// #include <stdio.h>
// void main()
// {
//     char *ptr;
//     char string[]="Welcome to IIIT Allahabad";
//     ptr=string;
//     ptr+=6;
//     printf("%s",ptr);#include <stdio.h>
//}


// #include <stdio.h>
// void main()
// {
//     char *ptr="IIITAllahabad";
//     printf("%c\n",*&*&*ptr);
//     printf("%c\n",*&*ptr);
//     printf("%c\n",*ptr);
//     //getchar();
// }
// // }



// #include <stdio.h>
// int main()
// {
//     int a[]={1,2,3,4,5};
//     int *ptr1=&a;
//     int *ptr2;
//     ptr2=ptr1*2;
//     printf("%p",ptr2);
// }



// #include <stdio.h>
// int main()
// {
//     int a[]={1,2,3,4,5};
//     int *ptr1[]={a,a+1,a+2,a+3,a+4};
//     int **ptr2=ptr1;
//     printf("%p\n",&a[0]);
//     printf("%d %d %p",*ptr1[3],*ptr2[4],*ptr1);
// }


// #include <stdio.h>
// void main()
// {
//     int a=10;
//     int *ptr=&a;
//     printf("%d %d",*ptr++,++*ptr);
// }


// #include <stdio.h>
// void main()
// {
//     int a[]={1,2,3,4,5};
//     int *ptr1[]=&a;
    //int*ptr2=a+3;
    //printf("%p",ptr2-ptr1);
   // }


// #include <stdio.h>
// int* add(int *a,int *b,int n,int m)

//     {
//     //int arr[n][m];
//     int* arr=(int *)malloc(n*m*sizeof(int));
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             arr[i*m+j]=*(a+i*m+j)+*(b+i*m+j);
//         }
//     }
//     return arr;
// }

// int main()
// {
//   int a[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
//   int b[2][5]={{1,2,3,4,5},{6,7,8,9,10}};
//   int *arr=add(a,b,2,5);
//   for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             printf("%d ",*(arr+i*5+j));
//         }
//         printf("\n");
//     }
// }



// #include <stdio.h>
// int main()
// {
//     char ch[10]="anjali";
//     //ch="anjali";
// }



// #include <stdio.h>

// void bubble_sort(int arr[],int n);
// int main ()
// {
//     int arr[5]={3,78,90,2,66};
//     bubble_sort(arr,5);
//     for(int i=0;i<5;i++)
//     printf("%d ",arr[i]);
// }
// void bubble_sort(int arr[],int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }


// #include <stdio.h>

// void selection_sort(int arr[],int n);
// int main ()
// {
//     int arr[5]={3,78,90,2,66};
//     selection_sort(arr,5);
//     for(int i=0;i<5;i++)
//     printf("%d ",arr[i]);
// }
// void selection_sort(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int min=arr[i];
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<min)
//             {
//                 int temp=min;
//                 min=arr[j];
//                 arr[j]=temp;
//             }
//         }
//         arr[i]=min;
//     }
// }





// #include <stdio.h>

// void insertion_sort(int arr[],int n);
// int main ()
// {
//     int arr[5]={3,78,90,2,66};
//     insertion_sort(arr,5);
//     for(int i=0;i<5;i++)
//     printf("%d ",arr[i]);
// }
// void insertion_sort(int arr[],int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0&&arr[j]>key)
//         {
//           //arr[j]=key;
//           arr[j+1]=arr[j]
//           j--;
//         }
//         arr[j+1]=arr[]
//     }
// }



// #include <stdio.h>
// void bubble(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int min=arr[i];
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j]<min)
//             {
//                 int temp=min;
//                 min=arr[j];
//                 arr[j]=temp;
//             }
//         }
//         arr[i]=min;
//     }
// }
// int main()
// {
//     int n[5]={22,5,4,99,0};
//     bubble(n,5);
//      for(int i=0;i<5;i++)
//      printf("%d ",n[i]);
// }



#include <stdio.h>
int main()
{
    int x=-30;
    if(x>=10)
    if(x<=50)
    printf("1");
    else
    printf("@");
    return 0;
}