#include <stdio.h>

long to_bin(int dec) {
	if (dec == 0) {
		return 0;
	} else {
		return dec % 2 + 10 * to_bin(dec/2);
	}
}


int main() {
	int n;
	printf("\nEnter the number in decimal:\n");
	scanf("%d", &n);
	
	printf("The number in binary is: %ld\n", (to_bin(n)));
	return 0;
}

