#include <stdio.h>

int main() {
    int a, b;
    printf("enter the value of first number");
    scanf("%d", &a);
    
    printf("enter the value of second number");
    scanf("%d", &b);
    printf("the smallest value is : %d", a<b||b>a);

    return 0;
} 