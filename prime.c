#include <stdio.h>

int main() {
	int n, i = 2;
	printf("\nEnter a number:\n");
	scanf("%d", &n);
	
	if (n == 2) {
		printf("Not a prime or a composite\n");
	} else if (n <= 1) {
		printf("Error in input");
	} else {
		while (i <= n - 1) {
			if (n % i == 0) {
				printf("It is not a prime number\n");
				break;
			}
			i++;
		}
		if (i == n) {
			printf("It is a prime number\n");
		}	
	}
	return 0;
}
