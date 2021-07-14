#include<stdio.h>
#define MAX_SIZE 1000

int main()
{
  int arr[MAX_SIZE];
  int i,n,count=0;

  /* Input size of array */
    printf("Enter size of the array : ");
    scanf("%d", &n);


    /* Input array elements */
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++)
    {
      if(arr[i]<0)
      {
        count++;
        printf("\n%d\t\n",arr[i]);
      }
    }

printf("\n Total -ve element are = %d\n",count);

  return 0;
}
