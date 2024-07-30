#include<stdio.h>
void namaste();
void bonjour();
//- A function gets called directly or indirectly from main

void namaste()
{
    bonjour();
    printf("namaste\n");
   
}

void bonjour()
{
    printf("bonjour\n");
}

int main()
{
    namaste();
}