#include<stdio.h>
#define MAX_SIZE 10000

int main()
{
  int arr[MAX_SIZE];
  int i,n,sum=0;
  printf("Enter the size of the array : ");
  scanf("%d",&n);

    printf("Enter %d  elements in the array : ",n);
    for (i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);

      sum = sum + arr[i];
    }


printf("\nSum of all elements of array = %d\n",sum);

  return 0;
}
