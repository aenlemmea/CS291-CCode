#include <stdio.h>
#include <math.h>

long convert(int dec) {
	long b_out = 0;
	int i = 0, r;
	
	while (dec) {
		r = dec % 2;
		b_out = b_out + r * pow(10, i++);
		dec = dec / 2;
	}
	return b_out;
}


int main() {
	int n;
	printf("\nEnter the number in decimal:\n");
	scanf("%d", &n);
	
	printf("The number in binary is: %ld\n", (convert(n)));
	return 0;
}
