#include<stdio.h>
#define MAX_SIZE 1000
int main()
{
  int arr[MAX_SIZE];    // Declare an array of MAX_SIZE
  int i,N;

  //input the size of the array
  printf("Enter the size of the array :");
  scanf("%d",&N);

  //input the elements in the array
  printf("Enter %d elements in the : ",N);
  for(i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("\nElemensts in the array are :");
  for(i=0;i<N;i++)
  {
    printf("\n%d\n",arr[i]);
  }

  return 0;
}
