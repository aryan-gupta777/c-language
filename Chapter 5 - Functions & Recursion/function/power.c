#include<stdio.h>
#include<math.h>
int power(int b ,int p);

int main(){
int b;
int p;
printf("enter the base value :");
scanf("%d",&b);
printf("enter the power value :");
scanf("%d",&p);
printf("%d",power(b,p));
return 0;
}

int power(int b,int p){
    int a =pow(b,p);
    return a;
}
