#include<stdio.h>
//using string to read the file
int main(){
    FILE *fprt;
    fprt=fopen("text2.txt","r");
    char ch[20];
    fscanf(fprt,"%s",ch);
    printf("%s",ch);

    fclose(fprt);
    return 0;
}
