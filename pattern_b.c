#include <stdio.h>

int main() {
	int i, y, j, r;
	printf("Enter the number of rows:\n");
	scanf("%d", &r);
	for (i = 1; i <= r; i++) {
		for (y =1; y <= r - i; y++) {
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++) {
			printf("*");
		}
		printf("\n"); 
	}
	return 0;
}
