#include<stdio.h>
//EOF==null
int main(){
    FILE *fptr;
    fptr = fopen("text7.txt","r");
    char ch ;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf("%c",ch);
        ch = fgetc(fptr);

    }
    printf("\n");

    fclose(fptr);
    return 0;
    
}
