#include <stdio.h>

int main() {
	int r1, c1, r2, c2;
	
	printf("\nEnter the number of rows of matrix A: \n");
	scanf("%d", &r1);
	
	printf("\nEnter the number of columns of matrix A: \n");
	scanf("%d", &c1);
	
	printf("\nEnter the number of rows of matrix B: \n");
	scanf("%d", &r2);
	
	printf("\nEnter the number of columns of matrix B: \n");
	scanf("%d", &c2);
	
	if ((r1 != r2) || (c1 != c2)) {
		printf("Adding two metrices require equal rows and columns between the two matrices");
		return 0;
	} else {
	

		int mata[r1][c1];
		int matb[r2][c2];

		printf("Enter the matrix A, space separated in a line: \n");	
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c1; j++) {
				scanf("%d", &mata[i][j]);
			}
		}

		printf("Enter the matrix B, space separated in a line: \n");
		for (int p = 0; p < r2; p++) {
			for (int q = 0; q < c2; q++) {
				scanf("%d", &matb[p][q]);
			}
		}
		
		printf("The sum of matrix A and B is:\n");
		for (int k = 0; k < r1; k++) {
			for (int t = 0; t < c1; t++) {
				printf("%d \t", (mata[k][t] + matb[k][t]));
			}
			printf("\n");
		}
		
	}
}
