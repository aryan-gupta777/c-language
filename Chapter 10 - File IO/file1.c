#include<stdio.h>

int main(){
FILE *fptr;

fptr = fopen("newfilee1.txt","r");
if (NULL==fptr)
{
    printf("file doesn't exist\n");
}
else{
fclose(fptr);
}
}