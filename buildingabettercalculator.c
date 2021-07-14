#include<stdio.h>
#include <stdlib.h>

int main(){
    double num1;
    double num2;
    char op;

   printf(" Enter First number : ");
   scanf("%lf",&num1);
   /* printf(" Enter two number : ");
    scanf("%lf%lf",&num1, &num2);*/
    printf("Enter a operator");
    scanf(" %c",&op);
    printf(" Enter Second number : ");
    scanf("%lf",&num2);

    if (op == '+'){
        printf("Sum is %.2f",num1 + num2);
    }
    else if (op == '-'){
        printf("Sub is %.2f",num1 - num2);
    }
    else if (op == '*'){
        printf("multi is %.3f",num1 * num2);
    }
    else if (op == '/'){
        printf("Div is %.5f",num1 / num2);
    }
    else{
        printf("Invalid operator");
    }





        return 0;
}