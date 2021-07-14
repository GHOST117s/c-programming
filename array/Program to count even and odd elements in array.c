#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 1000

int main()
{
  int arr[MAX_SIZE];
  int i,num,even,odd;

  printf("Enter the size of the array :");
  scanf("%d",&num);

  printf("Enter the elements :");
  for(i=0;i<num;i++)
  {
    scanf("%d",&arr[i]);
  }

  even = 0;
  odd = 0;

  for (i=0;i<num;i++)
      if(arr[i]%2 == 0)
      {
        even++;
      }
      else
      {
        odd++;
      }

      printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d\n", odd);

  return 0;
}
