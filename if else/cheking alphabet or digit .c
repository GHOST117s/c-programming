/*Step by step descriptive logic to check alphabet, digit or special character.

Input a character from user. Store it in some variable say ch.

First check if character is alphabet or not. A character is alphabet if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')).

Next, check condition for digits. A character is digit if(ch >= '0' && ch <= '9').

Finally, if a character is neither alphabet nor digit, then character is a special character.*/






#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;
    printf(" Enter any character : ");
    scanf("%c",&ch);

    if((ch >='a' && ch <='z') || (ch >= 'A' && ch <='Z'))
    {
        printf("%c is a character" , ch);
    }

    else if (ch >='0' && ch <='9'){

        printf("%c is a number",ch);
    }
    else{
        printf("%c is a special character",ch);
    }
return 0;
}
