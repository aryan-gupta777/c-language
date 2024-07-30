#include<stdio.h>
int main()
{
    int aadhar[5];

    //input
    //int *ptr=&aadhar[0]; or int *ptr=aadhar;
    for(int i=0;i<5;i++)
    {
        printf("%d INDUX : ",i);
        scanf("%d", &aadhar[i]);// or  scanf("%d", (ptr+i));
        
    }


    //output
    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d\n",i,aadhar[i]);// printf("%d index = %d\n",i,*(prt+1));
    }
    
}