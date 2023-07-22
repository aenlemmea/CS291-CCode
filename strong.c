#include <stdio.h>

int main() {
	int n, t, ld, s = 0,f;
	printf("\nEnter any number:\n");
	scanf("%d", &n);
	t = n;
	while (n > 0) {
		ld = n % 10;
		f  =  1;
		while (ld) {
			f *= ld;
			ld--;
		}
		s += f;
		n /= 10;
	}
	printf("%d\n", s);
	if (s == t) {
		printf("It is a strong number.\n");
	} else {
		printf("It is not a strong number.\n");
	}
}
