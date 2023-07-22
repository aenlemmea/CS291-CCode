#include <stdio.h>
int a = 0;

int rev(int n) {
	if (n == 0) {
		return a;
	} else {
		a = a * 10 + (n % 10);
	}
	
	return rev((n/10));
}

int main() {
	int n;
	printf("Enter a number to reverse:\n");
	scanf("%d", &n);
	
	printf("The reverse number is: %d\n", rev(n));
	return 0;
}


