#include <stdio.h>

int main() {
	int a = 0, b = 1, c, n, i;
	printf("\nEnter the no. of terms: ");
	scanf("%d", &n);
	printf("\nFibonacci series is: ");
	printf("\t%d \t%d", a, b);
	for (i = 2; i < n; i++) {
		c = a + b;
		printf("\t%d", c);
		a = b;
		b = c;
	}
	return 0;
}
