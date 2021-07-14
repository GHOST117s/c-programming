#include<stdio.h>

int isArmstrong(int num);
void printArmstrong(int start, int end);

int main()
{   
    int start, end;
    printf("Enter lower limit : ");
    scanf("%d",&start);
    printf("Enter upper limit :");
    scanf("%d",&end);

    printf("All armstrong number between are %d to %d are : \n", start, end);
    printArmstrong(start, end);

    return 0;
}

int isArmstrong(int num)
{
    int temp, lastDigit, sum;
    temp = num;
    sum = 0;
    while (temp!=0)
    {
        lastDigit = temp % 10;
        sum = sum +   lastDigit * lastDigit * lastDigit;
        temp = temp /  10;
    }

    if (num == sum)
         return 1;
    else
        return 0;
  
}

void printArmstrong(int start, int end)
{
    /* 
     * Iterates from start to end and print the current number 
     * if it is armstrong
     */
    while(start <= end)
    {
        if(isArmstrong(start)) 
        {
            printf("%d, ", start);
        }
        
        start++;
    }
}