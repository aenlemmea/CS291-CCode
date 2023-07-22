#include <stdio.h>

int main() {
	int n;
	printf("\nEnter a number:\n");
	scanf("%d", &n);
	if (n % 2 == 1) {
	  printf("It is an odd number.\n");
	} else {
		printf("It is an even number.\n");
	}
	return 0;
}
