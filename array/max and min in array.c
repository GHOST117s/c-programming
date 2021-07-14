#include<stdio.h>
#define MAX_SIZE 1000

int main(){
  int arr[MAX_SIZE];
  int i,n,max,min;

  printf("Enter the size of the array :");
  scanf("%d",&n);

    printf("Enter the element :");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
     /* Assume first element as maximum and minimum */
    max = arr[0];     //it will set the 1 element as the biggest element and compare it with other elements
    min = arr[0];     //it will set the 1 element as the smallest element and compare it with other elements


    for(i=1;i<n;i++){       //u can start the loop either from 1 or 0

    if (arr[i]>max)
    {
      max = arr[i];
    }
    if(arr[i]<min)
    {
      min = arr[i];
    }
  }
  printf("Maximum element = %d\n", max);
  printf("Minimum element = %d\n", min);

  return 0;
}
