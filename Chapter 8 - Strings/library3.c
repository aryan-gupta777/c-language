#include<stdio.h>
#include<string.h>
int main(){
    char firststr[100] = "hello";
    char secstring[] ="world";
    strcat(firststr,secstring);
    puts(firststr);
}