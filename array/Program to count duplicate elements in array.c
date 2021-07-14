#include<stdio.h>
#define MAX_SIZE 10000

int main()
{
  int arr[MAX_SIZE];
  int i,j,n,count=0;
  //input the size and elememt
  printf("Enter the size of the array :");
  scanf("%d",&n);

  printf("Enter the elements in the array : ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }

//find the duplicate elements

for(i=0;i<n;i++)
{
  for (j=i+1;j<n;j++)
  {
    if (arr[i]== arr[j])
    {
      count++;
      break;
    }
  }

}
printf("\n total number od dipulate elemets found = %d",count);

  return 0;
}
