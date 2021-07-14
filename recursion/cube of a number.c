#include<stdio.h>

double cube(double num);

int main()
{
  int num;
  double c;
  printf("Enter any number : ");
  scanf("%d",&num);

  c=cube(num);
  printf("cube of %d is %.1f\n",num,c);
  return 0;
}

double cube(double num)
{
  return (num*num*num);
}
