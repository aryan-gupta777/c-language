// C program to compute
// sum of digits in number.
#include <stdio.h>

int sumDigits(int n)
{
	if (n== 0) {
		return 0;
	}

	int a = n%10;
	int sum =a+ sumDigits(n / 10);

	return sum;	
}

// Driver code
int main()
{
	// Function call
	printf("%d", sumDigits(687));
	return 0;
}
