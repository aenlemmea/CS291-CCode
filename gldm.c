#include <stdio.h>

int gcd(int a, int b) {
	//return (b ? gcd(b, a % b) : a);
	int temp;
	while(b) {
		a %= b;
		temp = b;
		b = a;
		a = temp;
	}
	return a;
}

int lcm(int gcd, int prod) {
	return (prod / gcd);
}

int main() {
	int a, b, g;
	printf("\nEnter two numbers a and b:\n");
	scanf("%d %d", &a, &b);
	g = gcd(a,b);
	printf("The gcd is %d and the lcm is %d.\n", g, lcm(g, (a*b)));
}
