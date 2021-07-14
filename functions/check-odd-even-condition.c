#include<stdio.h.>
#include<stdlib.h>

int main(){
    int num;

    printf("Enter any number : ");
    scanf("%d",&num);

    (num & 1)
        ? print("%d is odd ",num);
        : print("%d is even" ,num);

        return 0;
}