#include<stdio.h>
#define MAX_SIZE 1000

int main()
{
  int arr[MAX_SIZE]; // Declares an array of size 100
      int n;          // Total number of elements in array
      int i, j, k;       // Loop control variables

      printf("Enter the size of the array :");
      scanf("%d",&n );
      printf("Enter the elements in the array :");
      for (i=0; i<n; i++)
      {
        scanf("%d",&arr[i]);
      }
      /*
           * Find duplicate elements in array
           */
      for(i=0;i<n;i++)
      {
        for (j=i+1;j<n;j++)
        {
          /* If any duplicate found */
          if (arr[i]==arr[j])
          {
             /* Delete the current duplicate element */
            for (k=j;k<n;k++)
            {
              arr[k]=arr[k-1];
            }
            /* Decrement size after removing duplicate element */
            n--;

            /* If shifting of elements occur then don't increment j */
            j--;
          }
        }


      }
      /*
     * Print array after deleting duplicate elements
     */
      printf("\nArray element after deleting duplicate : ");
      for(i=0;i<n;i++)
      {
        printf("%d\t",arr[i]);
      }

    return 0;
}
