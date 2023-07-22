#include <stdio.h>

int fib(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

int main() {
	int n, i = 0;
	printf("\nEnter the limit of the series: \n");
	scanf("%d", &n);
	printf("The fibonacci series upto %d is: \n", n);
	for (i; i < n; i++) {
		printf("%4d\n", fib(i));
	}
	return 0;
}
