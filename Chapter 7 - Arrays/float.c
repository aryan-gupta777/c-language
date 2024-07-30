#include<stdio.h>
int main(){
    float marks[3];
    printf("enter the marks of physics : ");
    scanf("%f",&marks[0]);
    printf("physic  = %f\n",marks[0]);

    printf("enter the marks of maths : ");
    scanf("%f",&marks[1]);
    printf("maths  = %f\n",marks[1]);

    printf("enter the marks of chemistry : ");
    scanf("%f",&marks[2]);
    printf("chemistry  = %f\n",marks[2]);

    marks[3]=(marks[0]+marks[1]+marks[2])/3;

    printf("the avrage of total marks is : %f", marks[3]);

    



}