#include <stdio.h>
#include <math.h>

int main() {
	int a,b,c;
	
	printf("\nEnter the coefficients a, b and c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	int D = (pow(b,2) - 4 * a * c);

	if (D > 0) {
		float r1 = (((-b) + sqrt(D)) / (2 * a));
		float r2 = (((-b) - sqrt(D))/ (2 * a));
		printf("The roots are real and distinct (unequal). The roots are %0.2f, %0.2f\n", r1, r2);
	} else if (D == 0) {
		float r = ((-b) / 2 * a);
		printf("The roots are real and equal. Both of those roots are %0.2f", r);
	} else {
		printf("The roots are imaginary");
	}
}
