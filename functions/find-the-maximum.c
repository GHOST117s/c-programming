#include<stdio.h>


    //function decelaration
int max(int num1, int num2);



int main()
{
    int num1,num2,maximum;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);


    maximum = max(num1,num2);

printf("Maxmimum = %d",maximum);

    return 0;

}


    //function defination 
int max(int num1,  int num2)
{
    int maximum;


        //find maximum between two numbers 
    if(num1>num2)
        maximum = num1;
    else
        maximum = num2;

            //return the maximum value to caller 
    return maximum;
}