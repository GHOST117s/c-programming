#include<stdio.h>
//#include<stdlib.h>

int main(){
int num1, num2;
        printf("Enter First number :");
        scanf("%d",&num1);

        printf("Enter second number : ");
        scanf("%d",&num2);

        if(num1 > num2){
            printf("%d is biggest",num1);
        }
        else{
            printf("%d is the biggest",num2);

        }

        return 0;
}



