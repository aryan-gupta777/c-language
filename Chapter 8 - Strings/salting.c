/*Find the salted form of a password entered by user if the 
salt is "123" & addes at the end*/

//pass = "test123"
//salt = "abc"
//testabc123 

#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
}

void salting(char password[]){
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass,password); //newpass = "test"
    strcat(newpass,salt);//newpass="test"+"123";
    puts(newpass);
}
