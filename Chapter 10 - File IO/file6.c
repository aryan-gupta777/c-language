#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("text6.txt", "r");
     printf("%c\n", fgetc(fptr));
     printf("%c\n", fgetc(fptr));
     printf("%c\n", fgetc(fptr));
     printf("%c\n", fgetc(fptr));
     printf("%c\n", fgetc(fptr));
   
    fclose(fptr);
    return 0;

} 