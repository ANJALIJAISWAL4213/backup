// #include <stdio.h>
// #include <math.h>

// int check_arms(int n){
//     int q = n, rem, c = 0, sum = 0;
//     while( q != 0){
//         c++;
//         q = q/10;
//     }
//     //printf("%d$$",c);
//     q = n;
//     while(q != 0){
//         rem = q%10;
//        // printf("$%d$",(int)pow(rem,c));
//         int ss=(int)pow(rem,c);
//         sum = sum + ss;
//         if(rem==5)
//         sum++;
//         printf("sum is %d\n",sum);
//         q = q/10;
//     }
//     if(sum == n){
//         printf("yes %d is an armstrong number\n",n);
//     }
//     else {
//         printf("No %d is not an armstrong number\n",n);
//     }
//     return 0;
// }

// int main () {
//     int n;
//     printf("enter number: ");
//     scanf("%d",&n);

//     //int c=check_arms(n);
//     check_arms(n);
//     return 0;
// }

// #include<stdio.h>
// int main () {
//  int a[4][5] = {{1, 2, 3, 4, 5},
//  {6, 7, 8, 9, 10},
//  {11, 12, 13, 14, 15},
//  {16, 17, 18, 19, 20}};
//  printf("%d\n", *(*(a+**a+2)+3));
//  return(0);
// }


// #include <stdio.h>

// void geeks()
// {
//     int var = 10;

//     // declare pointer variable
//     int* ptr;

//     // note that data type of ptr and var must be same
//     ptr = &var;

//     // assign the address of a variable to a pointer
//     printf("Value at ptr = %p \n", ptr);
//     printf("Value at var = %d \n", var);
//     printf("Value at *ptr = %d \n", *ptr);
// }

// // Driver program
// int main()
// {
//     geeks();
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     printf("Enter size of array:");
//     int n;
//     scanf("%d",&n);
//     int arr[n][n];
//     printf("Enter elements of array");
//     for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&arr[i][j]);
//     }
// }
// int mul_mat[n][n];
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         int sum=0;
//         for(int k=0;k<n;k++)
//         {
//  //printf("$%d$ $%d$",arr[j][k] ,arr[k][j]);
// sum=sum+arr[i][k]*arr[k][j];
// //printf("$%d$",sum);
//         }
//         //printf("$%d$",sum);
//         mul_mat[i][j]=sum;
//     }
// }

//  for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         printf("%d ",mul_mat[i][j]);
//     }
//     printf("\n");
// }
// }

// #include<stdio.h>
// int main()
// {
//     printf("Enter size of array:");
//     int n;
//     scanf("%d",&n);
//     int arr[n][n];
//     printf("Enter elements of array");
//     for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++)
//     {
//         scanf("%d",&arr[i][j]);
//     }
// }
// for(int i=0;i<n;i++)
// {
//     int max=arr[i][0];
//     for(int j=1;j<n;j++)
//     {
//         if(max<arr[i][j])
//         max=arr[i][j];
//     }
//     printf("%d ",max);
// }
// }

// #include<stdio.h>
// int main()
// {
//     printf("Enter size of array:");
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements of array");
//     for(int i=0;i<n;i++)
// {
//         scanf("%d",&arr[i]);

// }
// int no;
// printf("Enter the element that you need to search");
// scanf("%d",&no);
// int lb=1,ub=n-1,mid=(lb+ub)/2;
// for(int i=0;i<n/2;i++)
// {
//     mid=(lb+ub)/2;
//    if(no==arr[mid])
//    break;
// else if(no<arr[mid])
// {
//     ub=mid-1;
// }
// else
// lb=mid+1;
// }
// if(arr[mid]==no)
// printf("found");
// else
// printf("not found");
// }

// #include<stdio.h>
// int main()
// {
//     printf("Enter size of array:");
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter elements of array");
//     for(int i=0;i<n;i++)
// {
//         scanf("%d",&arr[i]);

// // // // }
// // // // int no;
// // // // printf("Enter the element that you need to search");
// // // // scanf("%d",&no);
// // // // int lb=1,ub=n-1,mid=(lb+ub)/2;
// // // // while(lb<ub)
// // // // {
// // // //     mid=(lb+ub)/2;
// // // //    if(no==arr[mid])
// // // //    break;
// // // // else if(no<arr[mid])
// // // // {
// // // //     ub=mid-1;
// // // // }
// // // // else
// // // // lb=mid+1;
// // // // }
// // // // if(arr[mid]==no)
// // // // printf("found");
// // // // else
// // // // printf("not found");
// // // // }

// // // // #include<stdio.h>
// // // // void swap(int *a,int *b);
// // // // void swap(int *a,int *b)
// // // // {
// // // //     int temp=*a;
// // // //     *a=*b;
// // // //     *b=temp;
// // // //     printf("%d %d",*a,*b);
// // // // }
// // // // int main()
// // // // {
// // // //     int a,b;
// // // //     scanf("%d %d",&a,&b);
// // // //     swap(&a,&b);

// // // // }
// // // // void swap(int *a,int *b)
// // // // {
// // // //     int temp=*a;
// // // //     *a=*b;
// // // //     *b=temp;
// // // //     printf("%d %d",*a,*b);
// // // // }

// // // // #include<stdio.h>
// // // // int add(int *a,int *b);
// // // // int main()
// // // // {
// // // //     int a,b;
// // // //     scanf("%d %d",&a,&b);
// // // //     int sum=add(&a,&b);
// // // //     printf("%d",sum);
// // // // }
// // // // int add(int *a,int *b)
// // // // {
// // // //     int sum=*a+*b;
// // // //     return sum;
// // // // }

// // // // #include<stdio.h>
// // // // int main()
// // // // {
// // // //     int a,b,c;
// // // //     scanf("%d %d %d",&a,&b,&c);
// // // //     int * p=&a;
// // // //     int max=*p;
// // // //     p=&b;
// // // //     if(max<*p)
// // // //     max=*p;
// // // //     p=&c;
// // // //     if(max<*p)
// // // //     max=*p;
// // // //     printf("%d",max);
// // // // }

// // // // #include<stdio.h>
// // // // int main()
// // // // {
// // // //     int arr[3];
// // // //     printf("Enter the nos.");
// // // //     for(int i=0;i<3;i++)
// // // //     scanf("%d",&arr[i]);
// // // //     int *ptr=arr;
// // // //     int max=*ptr;
// // // //     if(max<*(ptr+1));
// // // //     max=*(ptr+1);
// // // //     if(max<*(ptr+2))
// // // //     max=*(ptr+2);
// // // //     printf("%d",max);
// // // // }

// // // // #include<stdio.h>
// // // // int main()
// // // // {
// // // //     printf("Enter size of array:");
// // // //     int n;
// // // //     scanf("%d",&n);
// // // //     int arr[n][n];
// // // //     printf("Enter elements of array");
// // // //     for(int i=0;i<n;i++)
// // // // {
// // // //     for(int j=0;j<n;j++)
// // // //     {
// // // //         scanf("%d",&arr[i][j]);
// // // //     }
// // // // }

// // // // int *ptr=&arr[0][0];
// // // // int sum=0;
// // // // for(int i=0;i<n*n;i++)
// // // // {
// // // //     // for(int j=0;j<n;j++)
// // // //     // {

// // // //         sum+=*(ptr+i);
// // // //         //printf("$%d$",sum);
// // // //     //}
// // // // }
// // // // printf("%d",sum);
// // // // }

// // // #include <stdio.h>
// // // int main()
// // // {
// // //     int n;
// // //     printf("Enter size of array");
// // //     scanf("%d", &n);
// // //     int arr[n];
// // //     printf("Enter elements of array");
// // //     for (int i = 0; i < n; i++)
// // //         scanf("%d", &arr[i]);
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         for (int j = i; j < n; j++)
// // //         {
// // //             if ((arr[i] > arr[j]))
// // //             {
// // //                 int temp = arr[i];
// // //                 arr[i] = arr[j];
// // //                 arr[j] = temp;
// // //             }
// // //         }
// // //     }
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         for (int j = i + 1; j < n; j++)
// // //         {
// // //             for (int k = j + 1; k < n; k++)
// // //             {
// // //                 if(arr[i-1]==arr[i])
// // //                 break;
// // //                 if ((arr[i] + arr[j] + arr[k] == 0) && (i != j) && (j != k) && (k != i))
// // //                 {
// // //                     printf("%d %d %d ", arr[i], arr[j], arr[k]);
// // //                     printf("\n");
// // //                 }
// // //             }
// // //         }
 
// // //     }
// // // }





// // #include <stdio.h>
// // #include <stdlib.h>
// // #include<string.h>
// // struct student
// //         {
// //                 char f_name[100];
// //                 char l_name[100];
// //                 char roll_no[100];
// //                 char mobile_no[100];
// //         };
// // void swap(struct student *a,struct student *b)
// // {
// //         char temp_f_name[100];
// //         strcpy(temp_f_name,a->f_name);
// //         char temp_l_name[100]
// //                 =a->l_name;
// //         //char temp_roll_no=a->roll_no;
// //   //      char temp_mobile_no=*a->mobile_no;
// // //      a->f_name=b->f_name;
// // //      *a->l_name=*b->l_name;
// //  //       *a->roll_no=*b->roll_no;
// //   //      *a->mobile_no=*b->mobile_no;
// //         //*b->f_name=temp_f_name;
// //         //*b->l_name=temp_l_name;
// //         //*b->roll_no=temp_roll_no;
// //         //*b->mobile_no=temp_mobile_no;
// //    printf("%s\n",a->f_name);

// // }

// // void read(struct student add[],int n)
// // {
// //         for(int i=0;i<n;i++)
// //         {
// //         printf("Enter details of student %d",i+1);
// //         scanf("%s",add[i].f_name);
// //         scanf("%s",add[i].l_name);
// //         scanf("%s",add[i].roll_no);
// //         scanf("%s",add[i].mobile_no);
// //        // printf("%s",add[i].f_name);
// // }
// // }
// // void print(struct student add[],int n)
// // {
// //         for(int i=0;i<n;i++)
// //         {
// //         printf("Details of student %d\n",i+1);
// //         printf("%s\n",add[i].f_name);
// //         printf("%s\n",add[i].l_name);
// //         printf("%s\n",add[i].roll_no);
// //         printf("%s\n",add[i].mobile_no);
// //         printf("\n");
// // }        printf("\n");
// // }


// // int main()
// // {

// //         struct student ptr[2];
// //        // struct student *ptr[0]=(struct student *)malloc(sizeof(struct student));
// //        // struct student *ptr[1]=(struct student *)malloc(sizeof(struct student));
// //        // ptr[1]=s1;
// //         read(ptr,2);
// //         print(ptr,2);
// //         swap(&ptr[0],&ptr[1]);
// //         print(ptr,2);
// //         return 0;
// // }



// // C program to demonstrate use of static variable
// #include <stdio.h>

// void function()
// {
// 	int x = 20; // local variable
// 	static int y; // static variable
// y=20;
// 	x = x + 10;
// 	y = y + 10;
// 	printf("\tLocal: %d\n\tStatic: %d\n", x, y);
// }

// int main()
// {
// 	printf("First Call\n");
// 	function();
// 	printf("Second Call\n");
// 	function();
// 	printf("Third Call\n");
// 	function();
// 	return 0;
// }





// #include <stdio.h>
// #include <stdlib.h>

// // Define the structure
// struct Person {
//     char name[50];
//     int age;
// };

// int main() {
//     int numPersons;

//     // Get the number of persons from user input
//     printf("Enter the number of persons: ");
//     scanf("%d", &numPersons);

//     // Dynamically allocate memory for the array of structures
//     struct Person *people = (struct Person *)malloc(numPersons * sizeof(struct Person));

//     if (people == NULL) {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }

//     // Input details for each person
//     for (int i = 0; i < numPersons; ++i) {
//         printf("Enter name for person %d: ", i + 1);
//         scanf("%s", people[i].name);

//         printf("Enter age for person %d: ", i + 1);
//         scanf("%d", &people[i].age);
//     }

//     // Display details of each person
//     printf("\nDetails of people entered:\n");
//     for (int i = 0; i < numPersons; ++i) {
//         printf("Person %d: Name: %s, Age: %d\n", i + 1, people[i].name, people[i].age);
//     }

//     // Free dynamically allocated memory
//     free(people);

//     return 0;
// }
