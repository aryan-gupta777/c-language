#include<stdio.h>
int main(){
    int i =18;
    int *prt=&i;
    int **pprt =&prt;
    //pointer to pointer
    printf("%d\n", pprt);
    printf("%d\n", &prt);

    printf("%d\n", *prt);
    printf("%d\n", **pprt);
    
    printf("%d\n", *pprt);
    printf("%d\n", &i);
}