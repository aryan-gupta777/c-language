#include<stdio.h>
int main()
{
    int n;
    int sum = 0;

    printf("enter the value : ");
    scanf("%d", &n);
    for (int i = 1, j = n ; i <= n && j>=1 ; i++ , j--)
    {
        sum = sum + i;
        printf("%d\n", j);
    }
    printf("sum of all numbers is %d\n", sum);
    
}