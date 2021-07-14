#include<stdio.h>
#define SIZE 3

int main()
{
  int A[SIZE][SIZE];
  int B[SIZE][SIZE];
  int row,col,isEqual;

  printf("Enter elements in matrix A size %dx%d : \n",SIZE,SIZE);
  for(row=0;row<SIZE;row++)
  {
    for(col=0;col<SIZE;col++)
    {
      scanf("%d",&A[row][col]);
    }
  }

  printf("Enter elements in matrix B size %dx%d : \n",SIZE,SIZE);
  for(row=0;row<SIZE;row++)
  {
    for(col=0;col<SIZE;col++)
    {
      scanf("%d",&B[row][col]);
    }
  }

isEqual =1;

for (row = 0; row < SIZE; row++) {
  for(col=0;col<SIZE;col++)
  {
    if(A[row][col] != B[row][col]){
      isEqual =0;
      break;
    }
  }
}
if(isEqual==1)
{
  printf("\n Matrix A is equal to matrix B ");
}
else
{
  printf("\n Matrix A is not equal to matrix B ");
}

  return 0;
}
