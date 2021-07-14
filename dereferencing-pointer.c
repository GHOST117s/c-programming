#include<stdio.h>
#include<stdlib.h>

int main(){
    int age = 30;
    int * pAge = &age;   //in * pAge is basically storing the memory adress of the age variable

     printf("%p",pAge);      //here we are  just basically printing the memory adress of the variable

    printf("\n%d",*pAge);  //now here we are just basically deferencing the age variable 
    printf("\n%d",*&age);
    printf("\n%d",*&*&age);     //dereferenceing it again
    return 0;
}
