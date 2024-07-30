#include<stdio.h>
#include<string.h>

//user defined
struct student
{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct student s1;
    //s1.name = "aryan"; 
    strcpy(s1.name,"aryan");
    s1.roll=231554;
    s1.cgpa=8.4;

    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
     
     printf("\n");
    struct student s2={"anshu",666,4.0};
    

    printf("student name = %s\n", s2.name);
    printf("student roll = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);
    
    printf("\n");
    
    
    struct student s3={0}; 
    
    printf("student name = %s\n", s3.name);
    printf("student roll = %d\n", s3.roll);
    printf("student cgpa = %f\n",   s3.cgpa);
    

    return 0;

}
