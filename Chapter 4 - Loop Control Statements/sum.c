#include<stdio.h>
int main()
{
    int n;
    printf("enter the value last value for the sum of natural number : ");
    scanf("%d", &n);
     int sum = 0; //sum was initialize in outer part of the for loop therefor lifespan of it exist in out part also .
    for(int i=1;i<=n;i++)
    {
       
        sum = sum + i;
        /*
        n=5
        sum=0+1=1
        sum=1+2=3
        sum=3+3=6
        sum=6+4=10

        sum=10+5=15 loop ended 
        
        */

    }
    printf("the sum of all natural number is %d",sum);
}