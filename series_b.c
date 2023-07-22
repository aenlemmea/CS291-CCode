#include <stdio.h>
#include <math.h>

int main() {
	int n, i, start = 4;
	long double x = 0.0, fact = 1.0;
	
	printf("\nEnter the number of terms:\n");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		int r = 1;
		while (r <= start) {
			fact *= r;
			r++;
		}
		start += 2;
		x = x + (pow(-1, (i+1))/fact);
		fact = 1.0;
	}
	
	printf("\nThe sum of the series is: %0.9Lf\n", x);
	
	return 0;
}
