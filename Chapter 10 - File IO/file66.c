#include<stdio.h>
int main(){
    FILE *fprt;
    fprt=fopen("text2.txt","a");
    char ch[20]=" aryan";
    fprintf(fprt,"%s",ch);
    

    fclose(fprt);
return 0;
}
