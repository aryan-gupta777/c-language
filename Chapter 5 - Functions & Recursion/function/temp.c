#include<stdio.h>
int temp(int n);
int main(){
    int a;
    printf("enter the temp in celsius 0 or 100 :");
    scanf("%d",&a);
    temp(a);
    return 0;

}
int temp(int n){
    if (n<=15 && n>=0){
        printf("cold");
    }
    else{
        printf("hot");
    }
    return 0;
}