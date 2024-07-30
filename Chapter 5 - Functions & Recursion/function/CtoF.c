#include<stdio.h>
float temp(float n);

int main(){ 
    float a;
    printf("enter the temperature is celsius : ");
    scanf("%f", &a);
    printf("%f", temp(a));

}
float temp(float n){
    float x=(n*0.18)+32;
    return x;


}