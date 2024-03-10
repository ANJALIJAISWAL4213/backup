// 1
//  #include <stdio.h>
//  int main()
//  {
    // outer for loop determines the no of lines
//      for(int i=0;i<5;i++)
//      {
    // inner for loop determines the no of elements in a column
//          for(int j=0;j<=i;j++)
//          {
//          printf("* ");
//          }
// changing line
//          printf("\n");
//      }
//      return 0;
//  }

// 2
//   #include <stdio.h>
//  int main()
//  {
//      for(int i=0;i<5;i++)
//      {
//          for(int j=2*i;j<8;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//          printf("* ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 3
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=0;i<5;i++)
//      {
//          for(int j=i+1;j<5;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//          printf("* ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 4
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=4;i>=0;i--)
//      {
//          for(int j=0;j<=i;j++)
//          {
//          printf("* ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 5
//   #include <stdio.h>
//  int main()
//  {
//      for(int i=4;i>=0;i--)
//      {
//          for(int j=2*i;j<8;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//          printf("* ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 6
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=4;i>=0;i--)
//      {
//          for(int j=i+1;j<5;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//          printf("* ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 7
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=0;i<5;i++)
//      {
//          for(int j=0;j<i;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<4;j++)
//          {
//          printf("* ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 8
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=0;i<4;i++)
//      {
//          for(int j=i+1;j<5;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//          printf("* ");
//          }
//          printf("\n");
//      }
//       for(int i=2;i>=0;i--)
//      {
//          for(int j=i+1;j<5;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//          printf("* ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 9
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=3;i>0;i--)
//      {
//          for(int j=i+1;j<5;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//          printf("* ");
//          }
//          printf("\n");
//      }
//       for(int i=0;i<4;i++)
//      {
//          for(int j=i+1;j<5;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//          printf("* ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 10
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=0;i<5;i++)
//      {

//         if(i==0||i==4)
//         {
//             for(int j=0;j<5;j++)
//             printf("* ");
//         }
//         else
//         {
//             for(int j=0;j<5;j++)
//             {
//                 if(j==0||j==4)
//                 printf("* ");
//                 else
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 11
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=0;i<4;i++)
//      {
//          for(int j=i+1;j<5;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//              if(j==0||j==i)
//          printf("* ");
//          else
//          printf("  ");
//          }
//          printf("\n");
//      }
//  for(int i=0;i<5;i++)
//  printf("* ");
//      return 0;
//  }

// 12
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=0;i<5;i++)
//  printf("* ");
//  printf("\n");
//     for(int i=3;i>=0;i--)
//      {
//          for(int j=i+1;j<5;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//              if(j==0||j==i)
//          printf("* ");
//          else
//          printf("  ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 13
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=0;i<4;i++)
//      {
//          for(int j=i+1;j<5;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//              if(j==0||j==i)
//          printf("* ");
//          else
//          printf("  ");
//          }
//          printf("\n");
//      }
//     for(int i=2;i>=0;i--)
//      {
//          for(int j=i+1;j<5;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//              if(j==0||j==i)
//          printf("* ");
//          else
//          printf("  ");
//          }
//          printf("\n");
//      }
//      return 0;
//  }

// 14
//  #include <stdio.h>
//  int main()
//  {
//      for(int i=0;i<4;i++)
//  printf("* ");
//  printf("\n");
//     for(int i=2;i>=0;i--)
//      {
//          for(int j=i+1;j<4;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//              if(j==0||j==i)
//          printf("* ");
//          else
//          printf("  ");
//          }
//          printf("\n");
//      }
//          for(int i=1;i<3;i++)
//      {
//          for(int j=i+1;j<4;j++)
//          {
//              printf(" ");
//          }
//          for(int j=0;j<=i;j++)
//          {
//              if(j==0||j==i)
//          printf("* ");
//          else
//          printf("  ");
//          }
//          printf("\n");
//      }
//  for(int i=0;i<4;i++)
//  printf("* ");
//      return 0;
//  }

// 15
//  #include <stdio.h>
//  int main()
//  {
//      int c=1;
//      for(int i=0;i<4;i++)
//      {
//          for(int j=0;j<=i;j++)
//    {
//      printf("%d ",c);
//      c++;
//    }
//    printf("\n");
//      }
//      return 0;
//  }

// 16
// #include <stdio.h>
// int main()
// {
//     int pascal_tri[4][4];
//     for (int i = 0; i < 4; i++)
//     {
//         pascal_tri[0][i] = 1;
//     }
//     for (int i = 1; i < 4; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             if (j == 0 || j == i)
//             {
//                 pascal_tri[i][j] = 1;
//             }
//             else
//             {
//                 pascal_tri[i][j] = pascal_tri[i - 1][j - 1] + pascal_tri[i - 1][j];
//             }
//         }
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%d ", pascal_tri[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }