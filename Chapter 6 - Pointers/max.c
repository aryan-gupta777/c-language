#include<stdio.h>
int max(int *X,int *y);

int main(){
    int a =6;
    int b =5;
    max(&a,&b);
    return 0;
    

}
int max(int *x,int *y){
    if(*x>*y)
    {
        printf("max number is %d",*x);

    }
    else{
        printf("max number is %d",*y);
    }

}