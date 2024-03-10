//2
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int c = n / 2;
//     int d = n / 2;
//     printf("%d ", arr[c][d]);

//     for (int i = 0; i < n; i++)
//     {
//         int xx = d - (n - d - 1);
//         int yy = (c - 0) - (n - c - 1);
//         if (xx >= 0)
//         {

//             while ((xx >= 0)&&(d>0))
//             {
//                 d--;
//                 printf("%d ", arr[c][d]);
//                 xx--;
//             }
//             while ((yy <= 0)&&(c>0))
//             {
//                 c++;
//                 printf("%d ", arr[c][d]);
//                 yy++;
//             }
//         }
//         else
//         {
//             while (xx < 0)
//             {
//                 d++;
//                 printf("%d ", arr[c][d]);
//                 xx++;
//             }
//             while (yy > 0)
//             {
//                 c--;
//                 printf("%d ", arr[c][d]);
//                 yy--;
//             }
//         }
//     }
// }

//4
// #include <stdio.h>
// int main()
// {
//     char ch[100];
//     gets(ch);
//     for(int i=0;i<ch.size();i++)
//     {

//     }
// }


//5
// #include <stdio.h>
// long long int arr[50];
// int main()
// {
//     //printf("%d",arr[0]);
//     arr[1]=1;
//     for(int i=2;i<50;i++)
//     {
//         arr[i]=arr[i-1]+arr[i-2];
//     }
//     // for(int i=0;i<50;i++)
//     // {
//     //     printf("%lld ",arr[i]);
//     // }
//     int n;
//     scanf("%d",&n);
//     // int lb=0;
//     // int ub=49;
//     // int mid=(lb+ub)/2;
//     int f=0;
//     int x,y;
//     for(int i=0;i<50;i++)
//     {
//         for(int j=i+1;j<50;j++)
//     {
//         //mid=(lb+ub)/2;   
//         if((arr[i]+arr[j])==n)
//         {
//             x=i;
//             y=j;
//             f=1;
//             break;
//         }
//         if(f==1)
//         break;
//     }
//         // else if(arr[mid]>n)
//         // ub=mid-1;
//         // else
//         // lb=mid+1;
//     }
// if(f==0)
// printf("%d",-1);
// else
// printf(" %lld  %lld",arr[x],arr[y]);
// }