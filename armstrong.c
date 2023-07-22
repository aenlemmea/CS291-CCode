#include <stdio.h>
#include <math.h>

int main() {
	int n, s = 0, c = 0, k, t;
	printf("\nEnter a number:\n");
	scanf("%d", &n);
	k = n;
	while (n > 0) {
		c++;
		n /= 10;
	}
	n = k;
	while (k > 0) { 
		t = (k % 10);
		s += pow(t,c);
		k /= 10;	
	}
	if (s == n) {
		printf("It is an armstrong number.\n");
	} else {
		printf("It is not an armstrong number.\n");
	}
}	
