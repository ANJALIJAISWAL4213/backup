// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// struct student
// {
//     char f_name[100];
//     char l_name[100];
//     char roll_no[100];
//     char mobile_no[100];
// };
// void sort(struct student add[], int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (strcmp(add[i].f_name, add[j].f_name) > 0)
//             {
//                 swap(&add[i], &add[j]);
//             }
//         }
//     }
// }
// void read(struct student add[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter details of student %d", i + 1);
//         scanf("%s", add[i].f_name);
//         scanf("%s", add[i].l_name);
//         scanf("%s", add[i].roll_no);
//         scanf("%s", add[i].mobile_no);
//     }
// }
// void print(struct student add[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("Details of student %d\n", i + 1);
//         printf("%s\n", add[i].f_name);
//         printf("%s\n", add[i].l_name);
//         printf("%s\n", add[i].roll_no);
//         printf("%s\n", add[i].mobile_no);
//         printf("\n");
//     }
//     printf("\n");
// }
// void swap(struct student *a, struct student *b)
// {
//     struct student temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main()
// {

//     struct student ptr[2];
//     read(ptr, 2);
//     swap(&ptr[0], &ptr[1]);
//     print(ptr, 2);
//     sort(ptr, 2);
//     print(ptr, 2);
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int arr[2][3][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
//     // int c=1;
//     // for(int i=0;i<3;i++)
//     // {
//     //     for(int j=0;j<3;j++)
//     //     {
//     //         for(int k=0;k<3;k++)
//     //         {
//     //             arr[i][j][k]=c++;
//     //         }
//     //     }
//     // }
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             for(int k=0;k<4;k++)
//             {
//                 printf("%d ",arr[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
// }


#include <stdio.h>
int main()
{
    int a,b,c;
    printf("scanf("%d %d",&a,&b)");
}