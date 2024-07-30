#include<stdio.h>
#include<string.h>
int main(){
    char firstr[] ="hhh";
    char secstr[] = "hha";
    printf("%d\n",strcmp(firstr,secstr));

    char firstr1[] ="a";
    char secstr1[] = "a";
    printf("%d\n",strcmp(firstr1,secstr1));

    char firstr2[] ="A";
    char secstr2[] = "a";
    printf("%d",strcmp(firstr2,secstr2));
    
} 