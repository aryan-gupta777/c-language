#include<stdio.h>
void printname(char arr[]);

int main(){
    char firstname[]="aryan";
    char lastname[]="gupta";

    printname(firstname);
    printname(lastname);
}

void printname(char arr[]){
for (int i = 0;arr[i]!=0 ; i++)
{
    printf("%c",arr[i]);
}
printf("\n");

}