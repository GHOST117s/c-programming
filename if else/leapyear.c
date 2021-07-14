#include<stdio.h>
#include<stdlib.h>

int main(){
    int year;
        printf("Enter a Year");
        scanf("%d",&year);

        if(year % 4 ==0)
           {
               printf("Leap year");
           }
           else{
                printf("Common year");

           }




return 0;
}
