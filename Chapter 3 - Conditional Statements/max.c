#include<stdio.h>

int main()
{
    int a,b;
    printf("put the fist value : ");
    scanf("%d", &a);
    printf("put the second value : ");
    scanf("%d", &b);
    if(a>b)
    {
        printf("the max value is : %d",a);
    }
    else if(b>a)
    {
        printf("the max value is : %d",b);
    }
}