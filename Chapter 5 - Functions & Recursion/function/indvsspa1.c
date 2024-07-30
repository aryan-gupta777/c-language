#include<stdio.h>
void namaste();
void bonjour();

void namaste()
{
    printf("namaste");
}

void bonjour()
{
    printf("bonjour");
}

int main()
{
    printf("enter f for french and i for india : ");
    char ch ;
    scanf("%c", &ch);
    if(ch=='i'){
        namaste();
    }
    else 
    {
        bonjour();
    }
}