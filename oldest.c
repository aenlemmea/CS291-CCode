#include <stdio.h>

int main() {
	int X, Y, Z;
	printf("\nEnter the ages of Mr. X, Mr. Y and Mr. Z: ");
	scanf("%d %d %d", &X, &Y, &Z);
	
	if (X >= Y) {
		if (X >= Z) {
			printf("Mr. X is the oldest\n");
		} else {
			printf("Mr. Z is the oldest\n");
		}
	} else if (Y >= Z) {
		printf("Mr. Y is the oldest\n");
	} else {
		printf("Mr. Z is the oldest\n");
	}
}
