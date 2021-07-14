#include<stdio.h>

//function decleration
int max(int num1 , int num2);
//int min(int num1 , int num2);

int main(){
    int num1 ,num2,maximum,minimum;

    //input two numbers from user 
    printf("Enter any two number : ");
    scanf("%d%d",&num1,&num2);

    maximum=max(num1,num2);     //call maximum function
    //minimum=min(num1,num2);     //call minimum function

    printf("\n The maximum number is %d ",maximum);
   // printf("\n The minimum number is %d ",minimum);

    return 0;
}
    //Find maximum between two numbers.

/*int max(int num1, int num2)
{
    return(num1>num2) ?num1 : num2;
}
int min(int num1 , int num2 )
{
    return(num1>num2) ?num2 : num1;    
}
*/
int max(int num1 ,int num2)
{
    if(num1>num2)
        return num1;
    else
        return num2;
}