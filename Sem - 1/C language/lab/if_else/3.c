#include <stdio.h>

int main()
{
    char ch;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);


    /* Alphabet check */
    if((ch >= 'a' && ch <= 'z'))
    {
       
        printf("'%c' is small alphabet.", ch);
    }
     else{
            if (ch >= 'A' && ch <= 'Z'){
                printf("'%c' is captial alphabet.", ch);
            }
            else{
                if(ch >= '0' && ch <= '9'){
                    printf("it's number");
                }
                else{
                    printf("spacil character");
                }
             }
        }

    

    return 0;
}   
