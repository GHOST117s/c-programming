#include<stdio.h>

void EvenOdd(int cur, int limit);

int  main() {
    int lowerLimit , upperLimit;
    printf("Enter the lowerLimit :" );
    scanf("%d",&lowerLimit );
    printf("Enter the upperLimit :" );
    scanf("%d",&upperLimit );

    printf("Even/Odd number from %d to %d are : ",lowerLimit,upperLimit );
    EvenOdd(lowerLimit,upperLimit);
  return 0;
}
void EvenOdd(int cur, int limit) {
          if (cur > limit)
                    return;
                    printf("%d,",cur );

                    EvenOdd(cur +2 ,limit);
}
