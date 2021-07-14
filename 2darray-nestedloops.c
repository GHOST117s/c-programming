#include<stdio.h>
#include<stdlib.h>

int main(){
        int nums[3][2] = {
                    {1, 2},
                    {3, 4},
                    {5, 6}
                      };
    int i, j;
    for (i=0;i<3;i++){          //rows
        for(j=0;j<2;j++){       //column
            printf("%d,",nums[i][j]);       //print array
        }
        printf("\n");
    }

    return 0;
}