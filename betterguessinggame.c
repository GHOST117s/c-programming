#include<stdio.h>
#include<stdlib.h>

int main(){
    int SECRET_NUM = 6;
      int GUESS;
      int GUESS_COUNT = 0;          //INITALLY IT WILL BE ZERO
      int GUESS_LIMIT = 3;           //LIMITING THE NO OF INPUT
      int OUT_OF_GUESS = 0;   
      while(GUESS != 6  && OUT_OF_GUESS == 0){          //here OUT_OF_GUESS == 0 mean its true then it break out of the loop    
          if(GUESS_COUNT < GUESS_LIMIT){         //in this program a user may input multiole number of input
             printf("Enter a number :");
             scanf("%d",&GUESS);
             GUESS_COUNT++;                    //AFTER USER ENTER A INPUT IT WILL INCREMENTED
          }else{
              OUT_OF_GUESS = 1;         //basically it check true or false 
          }
      }
      if(OUT_OF_GUESS ==1){
          printf("out of guess");
      }else{
      printf("hey u win");
      }
    return 0;
}