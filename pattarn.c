// 1
//  #include <stdio.h>
//  int main()
//  {
//      int n;
//      // asking the user to input no of rows
//      printf("Enter the no rows you want to print: ");
//      scanf("%d", &n);
//      // outer for loop determines the no of lines
//      for (int i = 0; i < n; i++)
//      {
//          // inner for loop determines the no of elements in a column
//          for (int j = 0; j <= i; j++)
//          {
//              printf("* ");
//          }
//          // changing line
//          printf("\n");
//      }
//      return 0;
//  }

// 2
//  #include <stdio.h>
//  int main()
//  {
//      int n;
//      // asking the user to input no of rows
//      printf("Enter the no rows you want to print: ");
//      scanf("%d", &n);
//      // outer for loop determines the no of lines
//      for (int i = 0; i < n; i++)
//      {
//          // printing spaces
//          for (int j = 2 * i; j < (n - 1) * 2; j++)
//          {
//              printf(" ");
//          }
//          // inner for loop determines the no of elements in a column
//          for (int j = 0; j <= i; j++)
//          {
//              printf("* ");
//          }
//          // changing line
//          printf("\n");
//      }
//      return 0;
//  }

// 3
//  #include <stdio.h>
//  int main()
//  {
//      int n;
//      // asking the user to input no of rows
//      printf("Enter the no rows you want to print: ");
//      scanf("%d", &n);
//      // outer for loop determines the no of lines
//      for (int i = 0; i < n; i++)
//      {
//          // printing spaces
//          for (int j = i + 1; j < n; j++)
//          {
//              printf(" ");
//          }
//          // inner for loop determines the no of elements in a column
//          for (int j = 0; j <= i; j++)
//          {
//              printf("* ");
//          }
//          // changing line

//         printf("\n");
//     }
//     return 0;
// }

// 4
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // outer for loop determines the no of lines
//     for (int i = n-1; i >= 0; i--)
//     {
//         // inner for loop determines the no of elements in a column
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         // changing line
//         printf("\n");
//     }
//     return 0;
// }

// 5
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // outer for loop determines the no of lines
//     for (int i = n - 1; i >= 0; i--)
//     {
//         // printing spaces
//         for (int j = 2 * i; j < (n - 1) * 2; j++)
//         {
//             printf(" ");
//         }
//         // inner for loop determines the no of elements in a column
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         // changing line
//         printf("\n");
//     }
//     return 0;
// }

// 6
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // outer for loop determines the no of lines
//     for (int i = 4; i >= 0; i--)
//     {
//         // printing spaces
//         for (int j = i + 1; j < 5; j++)
//         {
//             printf(" ");
//         }
//         // inner for loop determines the no of elements in a column
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         // changing line
//         printf("\n");
//     }
//     return 0;
// }

// 7
//  #include <stdio.h>
//  int main()
//  {
//      int n;
//      // asking the user to input no of rows
//      printf("Enter the no rows you want to print: ");
//      scanf("%d", &n);
//      // outer for loop determines the no of lines
//      for (int i = 0; i < 5; i++)
//      {
//          // printing spaces
//          for (int j = 0; j < i; j++)
//          {
//              printf(" ");
//          }
//          // inner for loop determines the no of elements in a column
//          for (int j = 0; j < 4; j++)
//          {
//              printf("* ");
//          }
//          // changing line
//          printf("\n");
//      }
//      return 0;
//  }

// 8
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // outer for loop determines the no of lines in upper triangle
//     for (int i = 0; i < 4; i++)
//     {
//         // printing spaces
//         for (int j = i + 1; j < 5; j++)
//         {
//             printf(" ");
//         }
//         // inner for loop determines the no of elements in a column
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         // changing line
//         printf("\n");
//     }
//     // outer for loop determines the no of lines in lower triangle
//     for (int i = 2; i >= 0; i--)
//     {
//         // printing spaces
//         for (int j = i + 1; j < 5; j++)
//         {
//             printf(" ");
//         }
//         // inner for loop determines the no of elements in a column
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         // changing line
//         printf("\n");
//     }
//     return 0;
// }

// 9
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // outer for loop determines the no of lines in lower inverted triangle
//     for (int i = 3; i > 0; i--)
//     {
//         // printing spaces
//         for (int j = i + 1; j < 5; j++)
//         {
//             printf(" ");
//         }
//         // inner for loop determines the no of elements in a column
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         // changing line
//         printf("\n");
//     }
//     // outer for loop determines the no of lines in lower inverted triangle
//     for (int i = 0; i < 4; i++)
//     {
//         // printing spaces
//         for (int j = i + 1; j < 5; j++)
//         {
//             printf(" ");
//         }
//         // inner for loop determines the no of elements in a column
//         for (int j = 0; j <= i; j++)
//         {
//             printf("* ");
//         }
//         // changing line
//         printf("\n");
//     }
//     return 0;
// }

// 10
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // outer for loop determines the no of lines
//     for (int i = 0; i < n; i++)
//     {
//         // printing first and last row
//         if (i == 0 || i == n - 1)
//         {
//             for (int j = 0; j < n; j++)
//                 printf("* ");
//         }
//         // printing first and last column
//         else
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 if (j == 0 || j == n - 1)
//                     printf("* ");
//                 else
//                     printf("  ");
//             }
//         }
//         // changing line
//         printf("\n");
//     }
//     return 0;
// }

// 11
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // outer for loop determines the no of lines

//     for (int i = 0; i < n - 1; i++)
//     {
//         // printing spaces
//         for (int j = i + 1; j < n; j++)
//         {
//             printf(" ");
//         }
//         // printing star at first and last column else printing space
//         for (int j = 0; j <= i; j++)
//         {
//             if (j == 0 || j == i)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         // changing line
//         printf("\n");
//     }
//     // printing the last line
//     for (int i = 0; i < n; i++)
//         printf("* ");
//     return 0;
// }

// 12
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // printing first line
//     for (int i = 0; i < n; i++)
//         printf("* ");
//     // changing line
//     printf("\n");
//     // outer for loop determines the no of lines
//     for (int i = n - 2; i >= 0; i--)
//     {
//         // printing spaces
//         for (int j = i + 1; j < n; j++)
//         {
//             printf(" ");
//         }
//         // printing star at first and last column else printing space
//         for (int j = 0; j <= i; j++)
//         {
//             if (j == 0 || j == i)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         // changing line
//         printf("\n");
//     }
//     return 0;
// }

// 13
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // outer for loop determines the no of lines in upper part
//     for (int i = 0; i < n - 1; i++)
//     {
//         // printing spaces
//         for (int j = i + 1; j < n; j++)
//         {
//             printf(" ");
//         }
//         // printing star at first and last column else printing space
//         for (int j = 0; j <= i; j++)
//         {
//             if (j == 0 || j == i)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         // changing line
//         printf("\n");
//     }
//     // outer for loop determines the no of lines in lower part
//     for (int i = n - 3; i >= 0; i--)
//     {
//         // printing spaces
//         for (int j = i + 1; j < n; j++)
//         {
//             printf(" ");
//         }
//         // printing star at first and last column else printing space
//         for (int j = 0; j <= i; j++)
//         {
//             if (j == 0 || j == i)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         // changing line
//         printf("\n");
//     }
//     return 0;
// }

// 14
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // printing the first row
//     for (int i = 0; i < n - 1; i++)
//         printf("* ");
//     // changing line
//     printf("\n");
//     // outer for loop determines the no of lines in upper part
//     for (int i = n - 3; i >= 0; i--)
//     {
//         // printing spaces
//         for (int j = i + 1; j < n - 1; j++)
//         {
//             printf(" ");
//         }
//         // printing star at first and last column else printing space
//         for (int j = 0; j <= i; j++)
//         {
//             if (j == 0 || j == i)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         // changing line
//         printf("\n");
//     }
//     // outer for loop determines the no of lines in lower part
//     for (int i = 1; i < n - 2; i++)
//     {
//         // printing spaces
//         for (int j = i + 1; j < n - 1; j++)
//         {
//             printf(" ");
//         }
//         // printing star at first and last column else printing space
//         for (int j = 0; j <= i; j++)
//         {
//             if (j == 0 || j == i)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         // changing line
//         printf("\n");
//     }
//     // printing the last row
//     for (int i = 0; i < n - 1; i++)
//         printf("* ");
//     return 0;
// }

// 15
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // taking a variable to print the nos.
//     int c = 1;
//     // outer for loop determines the no of lines
//     for (int i = 0; i < n; i++)
//     {
//         // inner for loop determines the no of elements in a column
//         for (int j = 0; j <= i; j++)
//         {
//             // printing c
//             printf("%d ", c);
//             // incrementing the value of c
//             c++;
//         }
//         // changing line
//         printf("\n");
//     }
//     return 0;
// }

// 16
// #include <stdio.h>
// int main()
// {
//     int n;
//     // asking the user to input no of rows
//     printf("Enter the no rows you want to print: ");
//     scanf("%d", &n);
//     // creating an array to store pascal's triangle
//     int pascal_tri[n][n];
//     // initializing all elements of first row with 1
//     for (int i = 0; i < n; i++)
//     {
//         pascal_tri[0][i] = 1;
//     }
//     // stroring the elements in array
//     for (int i = 1; i < n; i++)
//     {
//         // printing 1 if boundary elements else printing the sum of elements of preceding row at precending and next index
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
//     // printing the pascal's triangle
//     for (int i = 0; i < n; i++)
//     {
//         // printing spaces
//         for (int j = i + 1; j < n; j++)
//         {
//             printf(" ");
//         }
//         // printing the elements of row
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%d ", pascal_tri[i][j]);
//         }
//         // changing line
//         printf("\n");
//     }

//     return 0;
// }

// 2.a
// #include <stdio.h>
// int main()
// {
//     // asking the user to input no of rows
//     printf("Enter the size of the array: ");
//     int n;
//     scanf("%d", &n);
//     // creating an array to store input
//     int arr[n];
//     // creating an array to store the reverse of the digit
//     int rev_arr[n];
//     // taking input in array
//     printf("Enter elements of array :");
//     for (int i = 0; i < n; i++)

//     {
//         scanf("%d", &arr[i]);
//     }
//     // finding reverse of each element
//     for (int i = 0; i < n; i++)
//     {
//         // declaring variables to store reverse and remainder
//         int rev = 0, rem = 0;
//         // loop to find reverse
//         while (arr[i] > 0)
//         {
//             rem = arr[i] % 10;
//             rev = rev * 10 + rem;
//             arr[i] = arr[i] / 10;
//         }
//         // storing the reverse in reverse array
//         rev_arr[i] = rev;
//     }
//     // printing the elements of reversed array
//     printf("Array after reversing the digits\n");
//     for (int i = 0; i < n; i++)

//     {
//         printf("%d\n", rev_arr[i]);
//     }
//     return 0;
// }

// 2.b
// #include <stdio.h>
// int main()
// {
//     // asking the user to input no of rows
//     printf("Enter the size of the array");
//     int n;
//     scanf("%d", &n);
//     // creating an array to store input
//     int arr[n];
//     // taking input in array
//     printf("Enter elements of array");
//     for (int i = 0; i < n; i++)

//     {
//         scanf("%d", &arr[i]);
//     }
//     // loop for converting each element of array into array of integer's digit
//     for (int i = 0; i < n; i++)
//     {
//         // initializing nn with array index i
//         int nn = arr[i];
//         // creating a variable to count no of digits
//         int count = 0;
//         // counting the no of digits
//         while (nn > 0)
//         {
//             count++;
//             nn /= 10;
//         }
//         // creating array of integer's digits
//         int arr_dig[count];
//         // initializing nn with array index i
//         nn = arr[i];
//         // storing digits in integer's digit array
//         for (int i = 0; i < count; i++)
//         {
//             arr_dig[count - i - 1] = nn % 10;
//             nn /= 10;
//         }
//         // printing the digit array
//         for (int i = 0; i < count; i++)
//         {
//             printf("digit at %d index is %d\t",i, arr_dig[i]);
//         }
//         // changing line
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    // asking the user to input no of rows
    printf("Enter the size of the array");
    int n;
    scanf("%d", &n);
    // creating the array
    int arr[n + 3];
    // asking the user to enter the array
    printf("Enter elements of array");
    for (int i = 0; i < n; i++)

    {
        scanf("%d", &arr[i]);
    }
    // creating a variable to store the data that has to be inserted at the beginning
    int beg = 0;
    // asking for  the data that has to be entered at beginning
    printf("Enter the element to be inserted at beginning of the array");
    scanf("%d", &beg);
    // shifting the array elements to make space at the beginning of the array
    for (int i = 1; i <= n; i++)

    {
        arr[n - i + 1] = arr[n - i];
    }
    // entering the data at the beginning
    arr[0] = beg;
    // creating variables for storing the position of the data that has to be entered and the data that has to be entered
    int pos, pos_ele;
    // asking for the posiiton where data has to be entered and the data that has to be entered at that posiiton
    printf("Enter the position and the element to be inserted at the specific position in the array");
    scanf("%d", &pos);
    scanf("%d", &pos_ele);
    // shifting the array elements to make space at the specified position
    for (int i = pos; i <= n + 1; i++)
    {
        arr[n - i + 3] = arr[n - i + 2];
    }
    // entering the data at the specified posiiton
    arr[pos - 1] = pos_ele;
    // asking for  the data that has to be entered at end
    printf("Enter the element to be inserted at the end of the array");
    scanf("%d", &arr[n + 2]);
    // printing the array
    for (int i = 0; i < n + 3; i++)

        printf("%d\n", arr[i]);
    return 0;
}
