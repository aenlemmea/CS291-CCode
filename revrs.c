#include <stdio.h>

int reverse(int n) {
	int out = 0, ld = 0;
	while (n > 0) {
		ld = n % 10;
		out = out * 10 + ld;
		n /= 10;
	}
	return out;
}

int main() {
	int n;
	printf("Enter a number to reverse:\n");
	scanf("%d", &n);
	
	printf("The reverse number is: %d\n", reverse(n));
	return 0;
}
