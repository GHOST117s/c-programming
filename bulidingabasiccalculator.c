#include<stdio.h>
#include <stdlib.h>

int main(){
    //int num1;
    //int num2;
    double num1;      // for decimal number
    double num2;
  printf("Enter first number : " );
  scanf("%lf",&num1);
  printf("Enter second number : ");
  scanf("%lf",&num2);

  printf("Answer : %.3f ", num1 + num2);

return 0;
}
