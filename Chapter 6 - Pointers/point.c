#include<stdio.h>
int main() {
int age = 22;
int *ptr = &age;
int new = *ptr;
printf("%d\n", new);
//address
printf("%p\n", &age);
printf("%p\n", ptr);
printf("%p\n", &ptr);
//data
printf("%d\n", age);
printf("%d\n", *ptr);
printf("%d\n", *(&age));

}