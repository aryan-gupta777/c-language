#include<stdio.h>

typedef struct vector{
    int x;
    int y;
}vec;

void calcsum(struct vector v1, struct vector v2,struct vector sum);

int main(){
    vec v1 = {5,10};
    vec v2 = {3,7};
    vec sum ={0};

    calcsum(v1,v2,sum);
    return 0;
}

void calcsum(struct vector v1, struct vector v2,struct vector sum){
sum.x =v1.x + v2.x;
sum.y =v1.y + v2.y;

printf("sum of x is : %d\n",sum.x);
printf("sum of y is : %d\n",sum.y);
}