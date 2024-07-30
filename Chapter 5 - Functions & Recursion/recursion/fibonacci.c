#include<stdio.h>
int fib(int n);
int main(){
    printf("%d",fib(6));

}
int fib(int n){
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    int fib1=fib(n-2);
    int fib2=fib(n-1);
    int fibo=fib1+fib2;
    //printf("fib of %d is : %d\n",n,fibo);
    return fibo;
}