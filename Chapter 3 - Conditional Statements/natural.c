#include<stdio.h>
int main()
{
    float a;
    int d;
    printf("enter the value :  ");
    scanf("%f", &a);
     
     d=a;
     if (a<=0)//a or d
     {
        printf(" this is not a natural number");
     }
     else if (d == a)
     {
        printf(" this is a natural number");
     }
     else{
        printf(" this is not a natural number");
     }
     
}