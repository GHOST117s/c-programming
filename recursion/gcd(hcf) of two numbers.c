#include<stdio.h>

int gcd(int a , int b);

int main()
{

    int  num1 ,num2,hcf;

    printf("Enter any two numbers to  find gcd :");
    scanf("%d%d",&num1,&num2);

    hcf = gcd (num1,num2);

    printf("GCD of %d and %d = %d",num1,num2,hcf);
    
    return 0;
}

/*
Algorithm to find GCD using Euclidean algorithm
Begin:
function gcd(a, b)
    If (b = 0) then
       return a
    End if 
    Else
       return gcd(b, a mod b);
    End if
End function
End
*/




int gcd(int a , int b);
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);

}