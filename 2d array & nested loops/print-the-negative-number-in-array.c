#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 1024

int main(){
    int arr[MAX_SIZE];
    int i,j;

    printf("Enter the size of the array : ");
    scanf("%d",&j);

    printf("Enter the Elements : ");
    for(i=0;i<j;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n ");



    return 0;
}