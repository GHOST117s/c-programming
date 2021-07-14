#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 1024   //Maximum array size

int main()
{   
    int arr[MAX_SIZE];              //Decelare an array of MAX_SIZE
    int i,j;
    //input array size 
    printf("Enter size of the array: ");
    scanf("%d",&j);
    
    //input elements in array
    printf("Enter %d element in the array : ",j);
    for(i=0;i<j;i++){
        scanf("%d",&arr[i]);
    }
     //print all the elements
    printf("\nElement in the array are : ");
    for(i=0;i<j;i++){
        printf("%d",arr[i]);
    }

    return 0;
}