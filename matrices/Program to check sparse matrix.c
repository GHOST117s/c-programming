#include<stdio.h>
#define SIZE 3

int main()
{
  int A[SIZE][SIZE];
  int row,col,total;

  printf("Enter the elements in the matrix :\n");
  for(row=0;row<SIZE;row++)
  {
    for(col=0;col<SIZE;col++)
    {
      scanf("%d",&A[row][col]);
    }
  }
 /* Count total number of zero elements in the matrix */
for(row=0;row<SIZE;row++)
{
  for(col=0;col<SIZE;col++)
  {
     /* If the current element is zero */
    if(A[row][col]==0)
    {
      total++;
    }
  }
}
if(total>=(row*col)/2)
{
  printf("\n THe given matrix is spare matrix .\n");
}
else{
  printf("\nThe given matrix is not a spare matrix.\n");
}

  return 0;
}
