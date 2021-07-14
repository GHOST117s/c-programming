
//     |  1  0   0|
// [B]=|  4  5  0 |
//     |  7  8  9 |



#include<stdio.h>
#define SIZE 3

int main()
{
  int A[SIZE][SIZE];
  int row,col,isLower;

  printf("Enter the elements in the matrix  :");
  for (row=0;row<SIZE;row++)
  {
    for (col=0;col<SIZE;col++)
    {
      scanf("%d",&A[row][col]);
    }
  }
  isLower=1;
  for (row=0;row<SIZE;row++)
  {
    for (col=0;col<SIZE;col++)
    {
        if(col>row && A[row][col]!=0)
        {
          isLower=0;
        }
  }
}
if(isLower==1){
  printf("\nThe matrix is lower triangular matrix. \n");
  for(row=0;row<SIZE;row++)
  {
    for(col=0;col<SIZE;col++){
      printf("\t%d",A[row][col]);
    }
    printf("\n");
  }

}
else{
  printf("\nThe matrix is not a lower tringualr matrix .\n" );
}

return 0;
}
