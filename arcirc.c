#include <stdio.h>

#define PI 3.14

int main() {
	int r;
	printf("\nEnter the radius of the circle: \n");
	scanf("%d", &r);
	printf("The area is %0.3f and the circumference is %0.2f\n", (PI * r * r), (2 * PI * r));
	return 0;
}
