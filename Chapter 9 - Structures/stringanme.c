#include<stdio.h>

typedef struct student{
    int roll;
    float cgpa;
    char name[100];
}std;
int main(){
    std s1 = {1662,3.2,"aryan"};
     printf("student name is %s\n", s1.name);
}