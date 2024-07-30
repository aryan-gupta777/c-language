#include<stdio.h>
int main(){
    // 2 x 3
   // marks of 2 student in 3 subject
   int marks[2][3];//_ _ _ | _ _ _
   marks[0][0]= 93;
   marks[0][1]= 82;
   marks[0][2]= 61;

   marks[1][0]= 99;
   marks[1][1]= 78;
   marks[1][2]= 55;

 printf("marks = %d",marks[0][1]);

}