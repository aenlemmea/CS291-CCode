#include <stdio.h>

void swap(int* a, int* b) {
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

int main() {
	printf("\nEnter two numbers `a` and `b`:\n");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("The values before swapping is `a` = %d and `b` = %d\n", a, b);
	swap(&a, &b);
	printf("The values after swapping is `a` = %d and `b` = %d\n", a, b);
	
}
