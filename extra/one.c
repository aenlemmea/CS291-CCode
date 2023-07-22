#include <stdlib.h>
#include <stdio.h>

int main() {
	int n, ld, fd = 0;
	printf("\nEnter the number:\n");
	scanf("%d", &n);
	ld = (n % 10);
	
	if (n < 10) {
		printf("The sum is: %d\n", n);
		exit(0);
	}
	
	while (n > 0) {
		fd = (n % 10);
		n /= 10;
	}
	
	printf("The sum is: %d\n", (ld + fd));
}
