#include<stdio.h>
int main()
{
    int a=2;
    
    if(a=1)//previously in the memory of "a" 2 was stored but after giving a new statment that "a=1" it will replace by new statment. so know the value of a is 1 in the memory.
    {
        printf("no is 1");

    }
    else{
        printf("no is 0");
    }
    
}
// {
//     int a=2;
//     if(a=0)//in c language 0 repesentant as false (means 0==false statment)
//     {
//         printf("no is 1");

//     }
//     else{
//         printf("no is 0");
//     }
// therefore the out put of it will be "no is 0" because  know in new memory the value of a is stored 0.
//  and 0 signify as false statment therfore "if" condition is worong hence it will print "else" statment.


// }