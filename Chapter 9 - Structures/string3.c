#include<stdio.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};
int main(){
    struct student s1 = {1662,3.2,"aerta"};
    printf("student roll =%d\n", s1.roll);

    struct student *prt= &s1;
    printf("student roll =%d\n",(*prt).roll);

    
    printf("student roll =%d\n",prt->roll);
}