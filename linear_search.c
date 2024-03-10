// #include <stdio.h>
// int search(int arr[],int n,int no);
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   int arr[n];
//   for(int i=0;i<n;i++)
//   {
//     scanf("%d",&arr[i]);
//   }
//   int no;
//   scanf("%d",&no);
//   int ans=search(arr,n,no);
//   if(ans!=-1)
//   printf("Element found");
//   else
//   printf("Element not found");
// }
// int sort(int arr[],int n,int no)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(no==arr[i])
//         return i;
//     }
//     return -1;
// }









// #include <stdio.h>
// int search(int arr[],int n,int no);
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   int arr[n];
//   for(int i=0;i<n;i++)
//   {
//     scanf("%d",&arr[i]);
//   }
//   int no;
//   scanf("%d",&no);
//   int ans=search(arr,n,no);
//   if(ans!=-1)
//   printf("Element found");
//   else
//   printf("Element not found");
// }
// int sort(int arr[],int n,int no)
// {
//     int mid,lb=0,ub=n-1;
//     for(;lb<=ub;)
//     {
//         mid=(lb+ub)/2;
//         if(no==arr[mid])
//         return mid;
//         else if(no<arr[mid])
//         ub=mid-1;
//         else
//         lb=mid+1;
//     }
//     return -1;
// }






//bubble search
// #include <stdio.h>
// void sort(int arr[],int n);
// int main()
// {
//       int n;
//   scanf("%d",&n);
//   int arr[n];
//   for(int i=0;i<n;i++)
//   {
//     scanf("%d",&arr[i]);
//   }
// sort(arr,n);
//   for(int i=0;i<n;i++)
//   {
//     printf("%d ",arr[i]);
//   }
// }
// void sort(int arr[],int n)
// {
//    for(int i=0;i<n-1;i++)
//    {
//      for(int j=0;j<n-i-1;j++)
//      {
//         if(arr[j]>arr[j+1])
//         {
//             int temp=arr[j];
//             arr[j]=arr[j+1];
//             arr[j+1]=temp;
//         }
//      }
//    }

// }





// #include <stdio.h>

// // Function to perform selection sort
// void selectionSort(int arr[], int n) {
//     int i, j, min_idx;

//     // Traverse through all array elements
//     for (i = 0; i < n - 1; i++) {
//         // Find the minimum element in the unsorted part
//         min_idx = i;
//         for (j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }

//         // Swap the found minimum element with the first unsorted element
//         int temp = arr[min_idx];
//         arr[min_idx] = arr[i];
//         arr[i] = temp;
//     }
// }

// // Function to print the array
// void printArray(int arr[], int size) {
//     int i;
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// // Example usage
// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, n);

//     selectionSort(arr, n);

//     printf("Sorted array: ");
//     printArray(arr, n);

//     return 0;
// }



//insertion sort
// #include <stdio.h>

// // Function to perform insertion sort
// void insertionSort(int arr[], int n) {
//     int i, key, j;

//     // Traverse through all array elements starting from the second element
//     for (i = 1; i < n; i++) {
//         key = arr[i];
//         j = i - 1;

//         /* Move elements of arr[0..i-1], that are greater than key,
//            to one position ahead of their current position */
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// // Function to print the array
// void printArray(int arr[], int size) {
//     int i;
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// // Example usage
// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, n);

//     insertionSort(arr, n);

//     printf("Sorted array: ");
//     printArray(arr, n);

//     return 0;
// }




// Bubble Sort: Compares adjacent elements and swaps them if they are in the wrong order.
// Selection Sort: Selects the smallest element from the unsorted portion and places it at the beginning of the array.
// Insertion Sort: Builds the final sorted array one element at a time by inserting each element into its proper place.
// Merge Sort: Divides the array into smaller sub-arrays, sorts them individually, and then merges them.
// Quick Sort: Chooses a 'pivot' element and partitions the array around the pivot, placing elements smaller than the pivot to its left and larger elements to its right.
// Heap Sort: Builds a heap data structure and repeatedly extracts the maximum element to form a sorted array.
// Radix Sort: Sorts elements by processing individual digits of the numbers representing the elements.





