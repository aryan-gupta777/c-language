#include <stdio.h> 
int main() 
{ 
	float d; 
	int n; 
     
	// Read the number into a float variable 
	printf("Enter a number: ");  
	scanf("%f", &d); 
	 
	// Assign it into an int variable 
	// If we do so, it will get truncated 
	n = d; 
	  
	if(d<=0){ 
	    printf("\nThe entered number is not a natural number");   
	    return 0; 
	} 
	 
	// Check whether entered number and truncated value are equal 
	if(n != d) {  
		printf("\nThe entered number is not a natural number"); 
	}  
	else {  
		printf("\nThe entered number is a natural number"); 
	} 
 
	return 0; 
} 
