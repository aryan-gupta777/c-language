#include<stdio.h>

int natu(int n);

int main(){
int a=5;
printf("%d",natu(a));
return 0;

}
int natu(int n){
    if(n==0)
    {
        return 0; //return 1; the ourput will be 16 becuase natu(0)=1
    }
    return n+natu(n-1);
}