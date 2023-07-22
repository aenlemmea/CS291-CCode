#include <stdio.h>
#include <math.h>

int main() {
	int n, d, t = 0, r = 0, i = 0;
	printf("\nEnter the number:\n");	
	scanf("%d", &n);
	t = n;
	while (n > 0) {
		d = (n % 10);		
		n /= 10;
		if (d + 1 == 0) {
			(n /= 10);
			n++;
		}
		r += (d + 1) * ((int) pow(10, i));
		i++;
	}
	printf("%d\n", r);
}
