#include<stdio.h>

int main()
{
    int a,b;
    printf("put the fist value : ");
    scanf("%d", &a);
    printf("put the second value : ");
    scanf("%d", &b);
   a>b ? printf("the max value is %d", a) : printf("the max value is %d",b);//ternary operater
}