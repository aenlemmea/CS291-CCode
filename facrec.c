#include <stdio.h>

int factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} 
	return (n * factorial(n-1));
}

int main() {
	int num;
	printf("\nEnter the number:\n");
	scanf("%d", &num);
	
	printf("\nFactorial of a number is %d. \n", factorial(num));
	return 0;
}
