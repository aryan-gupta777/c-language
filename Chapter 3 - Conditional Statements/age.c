#include<stdio.h>
int main()
{
    int age;
    printf("enter your age : ");
    scanf("%d", &age);
    if (age>=18)
    {
        printf("you are an adult \n");
        printf("you can have a diving license \n");
    }
    else{
        printf("you are a boy");
    }
    
}