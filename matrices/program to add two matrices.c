#include<stdio.h>
#define SIZE 3

int main()
{
  int A[SIZE][SIZE];  //matrix 1
  int B[SIZE][SIZE];    //matrix 2
  int C[SIZE][SIZE];    //resultant matrix

  int row,col;
  // input elements in the first matrix
  printf("Enter elements in matrix A of size 3x3 : \n " );
  for (row=0;row<SIZE;row++)
  {
    for(col=0;col<SIZE;col++)
    {
      scanf("%d",&A[row][col]);
    }
  }
// input elements in the second matrix
printf("\nEnter elements in matrix B of size 3x3 : \n " );
for (row=0;row<SIZE;row++)
{
  for(col=0;col<SIZE;col++)
  {
    scanf("%d",&B[row][col]);
  }
}
// add both the matrix A and B entry wise or element wise and store result in matrix c
for(row=0;row<SIZE;row++)
{
  for(col=0;col<SIZE;col++)
  {
      // Cij = Aij + Bij
    C[row][col] = A[row][col] + B[row][col];
  }
}
// now print the resultant matrix
printf("\nSum of matrix A+B = \n ");
for (row=0;row<SIZE;row++)
{
  for(col=0;col<SIZE;col++){
    printf("%d ",C[row][col]);
  }
  printf("\n");
}
  return 0;
}
