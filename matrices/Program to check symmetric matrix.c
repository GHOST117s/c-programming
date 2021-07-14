#include<stdio.h>
#define SIZE 3

int main()
{
  int A[SIZE][SIZE];
  int B[SIZE][SIZE];
  int row ,col, isSymetric;

  printf("\nEnter the element in the matrix :\n");
  for(row=0;row<SIZE;row++)
{
  for(col=0;col<SIZE;col++)
  {
    scanf("%d",&A[row][col]);
  }
}

/*
     * Find transpose of matrix A
     */
for(row=0;row<SIZE;row++)
{
  for(col=0;col<SIZE;col++)
  {
    /* Store each row of matrix A to each column of matrix B */
    B[col][row] = A[row][col];
  }
}

/*
     * Check whether matrix A is equal to its transpose or not
     */
isSymetric =1;
for(row=0;row<SIZE;row++)
{
  for(col=0;col<SIZE;col++)
  {
    if(A[row][col]!=B[row][col]){
      isSymetric=0;
      break;
    }
}
}
/*
     * If the given matrix is symmetric.
     */
     if(isSymetric==1)
     {
       printf("\nThe given matrix is spare symetric matrix.\n");
       for(row=0;row<SIZE;row++)
       {
         for(col=0;col<SIZE;col++)
         {
           printf("\t%d",A[row][col]);
         }
         printf("\n");
       }
     }
     else
     {
       printf("\nThe given matrix is not symmetric.\n");
     }


  return 0;
}
