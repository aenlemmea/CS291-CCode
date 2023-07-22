#include <stdio.h>

int main() {
	int n, s = 0; 
	printf("\nEnter the number:\n");
	scanf("%d", &n);
	while (n > 0) {
		s += (n % 10);
		n /= 10;
	}
	printf("The sum of the digits is: %d\n", s);
	return 0;
}
