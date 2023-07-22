#include <stdio.h>

int main() {
	int n, i, c, line;
	printf("\nEnter the number of rows:\n");
	scanf("%d", &n);
	
	for (line = 1; line <= n; line++) {
		c = 1;
		for (i = 1; i <= line; i++) {
			printf("%d", c);
			c = c * (line - i) / i;
		}
		printf("\n");
	}
}
