#include<stdio.h>
int main()
{
    int n;
    printf("enter the limitng value");
    scanf("%d", &n);
    for(int i=1; i<=n; i=i+2)
    {
        printf("%d\n", i);
    }

}
