#include<stdio.h>
int main(){

    //int datatype , memory used = 4*4=16
    int marks[4];// 4 varible will be created

    //you can use for loop also
    printf("enter the marks of physics : ");
    scanf("%d",&marks[0]);
    printf("physic  = %d\n",marks[0]);

    printf("enter the marks of maths : ");
    scanf("%d",&marks[1]);
    printf("maths  = %d\n",marks[1]);

    printf("enter the marks of chemistry : ");
    scanf("%d",&marks[2]);
    printf("chemistry  = %d\n",marks[2]);

    marks[4]=(marks[0]+marks[1]+marks[2])/3;

    printf("the avrage of total marks is : %d", marks[4]);

    



}