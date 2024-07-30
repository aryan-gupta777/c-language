#include<stdio.h>
void calculategst(float value);

int main(){
        float value =100;
        calculategst(value);
        printf("value is %f\n", value);// Changes to parameters in function don't change the values in calling function. Because a copy of argument is passed to the function

}

void calculategst(float value){ 
    value=value+(value*0.18);
    printf("final price is %f\n",value);

}