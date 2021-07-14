#include<stdio.h>
#include<math.h>

int isArmstrong(int number)
{
    int lastDigit = 0;
    int power = 0;
    int sum = 0;

  // temporary variable to store number
  int n = number;

  while(n!=0) {

     // find last digit
     lastDigit = n % 10;

     // find power of digit (order = 3)
     power = lastDigit*lastDigit*lastDigit;

     // add power value into sum
     sum += power;

     // remove last digit
     n /= 10;
  }
         if(sum == number) return 0;
        else return 1;
}
int main(){
    int number;
    printf("Enter any number : ");
    scanf("%d",&number);
    if (isArmstrong(number)==0)
    {
        printf("%d is an Armstrong number  .\n",number);
    }
    else
    {
        printf("%d is not an Armstrong number .\n",number);
    }
    
    return 0;
}