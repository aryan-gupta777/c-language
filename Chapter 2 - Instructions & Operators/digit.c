#include <stdio.h>

int main() {
    char ch;
    printf("C program to check if a given character is a digit or not\n");
    printf("Please enter a character: ");
    scanf("%c", &ch);

    printf("%d", ch >= '0' && ch <= '9') ;//ascii
    
    

    return 0;
}
