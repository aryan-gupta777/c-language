#include<stdio.h>
int main()
/*
1!=1         = 1
2!=1*2       = 2
3!=1*2*3     = 6
4!=1*2*3*4   = 24
5!=1*2*3*4*5 = 120
*/
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    int fact = 1;
    for(int i=1; i<=n ;i++)
    {
        fact=fact*i;

    }
    printf("%d\n", fact);
}