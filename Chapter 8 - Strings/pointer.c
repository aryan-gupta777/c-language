#include<stdio.h>

int main(){
    char *canchange ="hello world";
    puts(canchange);
    canchange = "hello";
     canchange = "world";
    puts(canchange);

    /* char cannotChange[] ="hello world";
    puts(cannotChange);
    cannotchange = "hello";red line 
    puts(canchange);*/
}