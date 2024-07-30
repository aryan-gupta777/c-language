#include<stdio.h>
int multi(int a, int b);
int div(int a,int b);
int main()
{
    int x,y;
    x=10;
    y=5;
    int z=multi(x,y);
    int k=div(x,y);
    printf("product is %d\n",z);
    printf("divison is %d", k);
}

int multi(int a ,int b)
{
    int c;
    c=a*b;
    return (c);
}

int div(int a ,int b)
{
    int c;
    c=a/b;
    return(c);
}