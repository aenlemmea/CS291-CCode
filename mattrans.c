#include <stdio.h>

int main() {
	int r1, c1;

	printf("\nEnter the number of rows of matrix A: \n");
	scanf("%d", &r1);

	printf("\nEnter the number of columns of matrix A: \n");
	scanf("%d", &c1);

	int mata[r1][c1];

	printf("Enter the matrix A, space separated in a line: \n");	
	for (int i = 0; i < r1; i++) {
		for (int j = 0; j < c1; j++) {
			scanf("%d", &mata[i][j]);
		}
	}
	
	printf("The transposed matrix B is:\n");
	for (int s = 0; s < c1; s++) {
		for (int t = 0; t < r1; t++) {
			printf("%4d", mata[t][s]);
		}
		printf("\n");
	}
}
