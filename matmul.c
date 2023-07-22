#include <stdio.h>

int get_input(int* r1, int* c1, int* r2, int* c2) {
	printf("\nEnter the number of rows of matrix A: \n");
	scanf("%d", r1);
	
	printf("\nEnter the number of columns of matrix A: \n");
	scanf("%d", c1);
	
	printf("\nEnter the number of rows of matrix B: \n");
	scanf("%d", r2);
	
	printf("\nEnter the number of columns of matrix B: \n");
	scanf("%d", c2);
}

int main() {
	int r1, c1, r2, c2;
	
	get_input(&r1, &c1, &r2, &c2);
	
	if (c1 != r2) {
		printf("Invalid dimensions for matrix multiplication.\n");
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
		
		int res[r1][c2];
		printf("The product of matrix A and B is:\n");
		for (int i = 0; i < r1; i++) {
			for (int j = 0; j < c2; j++) {
				res[i][j] = 0;
				for (int k = 0; k < c2; k++) { 
					res[i][j] += mata[i][k] + matb[k][j];
				}
			}
		}
		
		for (int a = 0; a < r1; a++) {
			for (int b = 0; b < c2; b++) {
				printf("%3d", res[a][b]);
			}
			printf("\n");
		}
		printf("n");
	}
}
