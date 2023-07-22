#include <stdio.h>

float power(int m, int n) {
	int i, a = 1;

	if (!n) {
		return 1;
	}
	else {
		for (i = 1; i <= (n < 0 ? -n : n); i++) {
			a *= m;
		}
	}
	
	return (n < 0 ? (1.0/a) : a);
}

int main() {
	int m,n;
	printf("\nEnter the base:\n");
	scanf("%d", &m);
	printf("Enter the power:\n");
	scanf("%d", &n);
	
	printf("The result is %f\n", (power(m,n)));
	return 0;
}
