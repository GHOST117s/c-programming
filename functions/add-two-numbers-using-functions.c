#include<stdio.h>
#include<stdlib.h>

int add(int num1 , int num2 );      //function deceleration 

int main()
{
    int n1,n2,sum;                              //the code u want to execute 
    printf(" Enter  any two  number : ");
    scanf("%d%d",&n1,&n2);

    sum = add(n1,n2);                  //Addition function call  n1 and n2 are paramaeter passed to  add functions

    printf("The sum is %d ",sum);

    return 0;   
}
    //function call
int add(int num1, int num2){
    int sum = num1 + num2;

    return sum;         // return valude of sum to the main function 
}