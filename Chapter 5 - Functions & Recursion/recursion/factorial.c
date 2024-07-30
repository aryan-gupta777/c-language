#include<stdio.h>
int fact(int n);

int main(){
    int a = 5;
printf("fact is : %d", fact(a));

return 0;

}
int fact(int n)
{
    if(n==0) //base case
    {
        return 1;
    }
    
    return n*fact(n-1);//recursion
}