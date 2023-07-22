#include <stdio.h>

void amicable(int n1, int n2) {
	int i, j, r, sum1 = 0, sum2 =0;
	for (i=1; i<n1; i++) {
		r = n1 % i;
		if (!r) {
			sum1 += i;
		}
	}
	
	for (j=1; j<n2; j++) {
		r = n2 % j;
		if (!r) {
			sum2 += j;
		}
	}
	
	//printf("DEBUG: sum1 = %d and sum2 = %d\n", sum1, sum2);
	
	if ((n1 == sum2) && (n2 == sum1)) {
		printf("%d and %d are amicable pairs\n", n1, n2);	
	} else {
		printf("%d and %d are not amicable pairs\n", n1, n2);
	}
}

int main() {
	int num1, num2;
	printf("\nEnter the two numbers:\n");
	scanf("%d %d", &num1, &num2);
	amicable(num1, num2);
}
