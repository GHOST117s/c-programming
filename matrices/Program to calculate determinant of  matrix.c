#include<stdio.h>
#define SIZE 3

int main()2
{
  int A[SIZE][SIZE];
  int row,col;
  int a,b,c,d,e,f,g,h,i;
  int det;

  printf("Enter the elements in the matrix :\n");
  for(row=0;row<SIZE;row++)
  {
    for(col=0;col<SIZE;col++)
    {
      scanf("%d",&A[row][col]);
    }
  }
  /*
       * Used as a temporary variables to make calculation easy
       * |         |
       * | a  b  c |
       * | d  e  f |
       * | g  h  i |
       * |         |
       */


  a = A[0][0];
    b = A[0][1];
      c = A[0][2];
        d = A[1][0];
          e = A[1][1];
            f = A[1][2];
              g = A[2][0];
                h = A[2][1];
                  i = A[2][2];


                  /*
                      * det(A) = a(ei - fh) - b(di - fg) + c(dh - eg)
                      */

        det = (a*(e*i-f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));


        printf("\nDeterminant of matrix A = %ld\n", det);

  return 0;
}
