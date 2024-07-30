#include<stdio.h>
int main()
// when you are defining any character you must have to put in 'apostrophe' then the compiler will recorginise the character value 
{
    char ch;
    printf("enter the character");
    scanf("%c", &ch);//%d no 
    if (ch>='A' && ch<='Z')//the compiler will recornize the charater by ASCII 'A'=65 and 'Z'=90 
    {
        printf("the character is an upper case");

    }
    else if (ch>='a' && ch<='z')//'a'=97 and 'z'=122
    {
        printf("the character is a lower case");

    }
    else{
        printf("it is not an alphabat");
    }
}