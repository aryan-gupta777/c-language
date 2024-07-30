#include<stdio.h>

void printhello();//Function Prototype (> Tell the compiler)

int main(){       //Function Definition (to do the work)
    printhello();
    printhello();
    printhello();
}

void printhello(){//Function Call (use the work)
    printf("hello!\n");
}