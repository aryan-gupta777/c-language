#include<stdio.h>
int main()
{
    int t;
    printf("enter number : ");
    scanf("%d", &t);

    for(int i=1;i<=10;i++)
    {
        printf("%d\n", t*i);
    }
}