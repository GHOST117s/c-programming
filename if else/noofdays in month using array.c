#include<stdio.h>
#include<stdlib.h>

int main(){

    const int Months[]={31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30, 31};
    int month;

    printf("Enter a month number (1-12) : ");
    scanf("%d",&month);

    if(month >=1 && month <=12){
        printf("%d days",Months[month -1]);         //becoz the Months stored in array from 0 to 11 that mean 12 months
    }
    else{
        printf("Invalid input enter a month between (1-12)");
    }
    return 0;
}
