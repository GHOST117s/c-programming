#include<stdio.h>
#define SIZE 3

int main()
{
  int A[SIZE][SIZE];
  int row,col,isIdentity;

  printf("Enter the elements in the matrix :\n ");
  for(row=0; row<SIZE; row++)
  {
    for(col=0;col<SIZE;col++)
    {
      scanf("%d",&A[row][col]);
    }
  }

  isIdentity = 1;
  for(row=0; row<SIZE; row++)
  {
    for(col=0;col<SIZE;col++)
    {
      if(row == col && A[row][col]!=1){
          /* If elements of main diagonal is not equal to 1 */
        isIdentity = 0;
      }
      else if(row!=col && A[row][col]!=0){
        /* If other elements than main diagonal is not equal to 0 */
        isIdentity = 0;
      }
    }
  }
if(isIdentity == 1)
{
  printf("\n The given matrix is Identity matrix.\n");

for(row=0; row<SIZE; row++)
        {
            for(col=0; col<SIZE; col++)
            {
                printf("%d ", A[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("The given matrix is not Identity Matrix");
    }

  return 0;
}
