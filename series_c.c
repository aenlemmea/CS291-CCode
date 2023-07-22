#include <stdio.h>

int main() {
	int n, i, in = 0, pr = 0;
	printf("\nEnter the range of numbers:\n");
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		pr = (pr * 2) + 1;
		in += pr;
	}
	printf("\nThe sum is: %d\n", in);
}
