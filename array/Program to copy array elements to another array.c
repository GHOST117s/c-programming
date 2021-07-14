#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 1000

int main()
{
  int source[MAX_SIZE], dest[MAX_SIZE];           // we must declare the variable source and destination
  int i,n;

/* Input size of the array */
  printf("Enter the size of the array :");
  scanf("%d",&n);

/* Input array elements */
  printf("Enter the element in the array :");
  for(i=0;i<n;i++)
  {
    scanf("%d",&source[i]);
  }

  /*
     * Copy all elements from source array to dest array
     */
  for (i=0;i<n;i++)
  {
    dest[i] = source[i];
  }
  /*
       * Print all elements of source array
       */
      printf("\n Elements of the source array are :");
      {
        for(i=0;i<n;i++)
        printf("%d\t,",source[i]);
      }

      /*
           * Print all elements of dest array
           */

          printf("\n Elements of the destination array are :");
          for ( i = 0; i < n; i++) {
          printf("%d\t,",dest[i]);
          }

  return 0;
}
