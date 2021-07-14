#include<stdio.h>
#define MAX_SIZE 10000

int main()
{
  int arr[MAX_SIZE];
  int i,n,pos;

  printf("Enter the size of the array :");
  scanf("%d",&n);

  printf("Enter the elements in the array :");
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  printf("Enter the position to delete :");
  scanf("%d",&pos);

  if(pos<0 || pos > n)
  {
    printf("Invalid position! Enter the position from  1 to %d ",n);

  }
  else {
  for(i=pos;i<n;i++)        
  {
    arr[i]=arr[i+1];
  }
  n--;

  printf("\nElements of the array after delete :");
  for(i=0;i<n;i++)
  {
    printf("%d\t, ",arr[i]);
  }
}
  return 0;
}
