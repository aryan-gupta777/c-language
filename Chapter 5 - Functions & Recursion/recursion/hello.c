#include<stdio.h>
void hello(int n);

int main(){
    hello(10);
    return 0;

}
void hello(int n){
    if(n==0)
    {
        return ;
    }
    printf("hello world\n");
    hello(n-1);
}