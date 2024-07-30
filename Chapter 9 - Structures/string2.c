#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student ece[100];
    ece[0].roll = 1564;
    ece[0].cgpa = 7.5;
    strcpy(ece[0].name,"aryan");

    ece[1].roll = 1478;
    ece[1].cgpa = 9.4;
    strcpy(ece[1].name,"dvcfbghvh");
    
    printf("name = %s\n",ece[0].name);
    printf("name = %d\n",ece[1].roll);


}
