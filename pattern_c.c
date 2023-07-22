#include <stdio.h>

int main() {
	int i,j, r;
	printf("\nEnter the number of rows: \n");
	scanf("%d", &r);
	for (i = 1; i <= r; i++) {
		for (j = 1; j <= i; j++) {
			if ((i + j) % 2 == 0) {
				printf("1");
			} else {
				printf("0");
			}
		}
		printf("\n");
	}
}
