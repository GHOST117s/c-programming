#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);

    if (num > 0){

        printf("Number is +ve");
    }
    else if (num < 0) {
            printf("Number is -ve");

    }
    else{
        printf("Number is zero");
    }


    return 0;
}
