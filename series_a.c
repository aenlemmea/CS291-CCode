#include <stdio.h>

int main() {
	int n, i;
	float x = 0.0, fact = 1.0;
	
	printf("\nEnter the number of terms:\n");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		fact = fact * i;
		x = x + ( 2 * i - 1) / fact;
	}
	printf("\nThe value is %f.\n", x);
	return 0;
}
