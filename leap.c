#include <stdio.h>

int main() {
	printf("\nLeap years between 1900 and 2020 are:\n");
	for (int yr = 1900; yr <= 2020; yr++) {
		if (((yr % 4 == 0) && (yr % 100 != 0)) || (yr % 400 == 0)) {
			printf("%d\t", yr);
		}
	}
	return 0;
}
