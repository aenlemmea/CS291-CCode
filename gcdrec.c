#include <stdio.h>

int gcd(int a, int b) {
	return (b ? gcd(b, a % b) : a);
}

int main() {
	int a, b;
	printf("\nEnter two numbers a and b:\n");
	scanf("%d %d", &a, &b);
	printf("The gcd is %d.\n", gcd(a,b));
	return 0;
}

