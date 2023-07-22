#include <stdio.h>
#include <stdlib.h>


int main() {

	int n, i, k;
	
	printf("\nEnter the number of elements: \n");
	scanf("%d", &n);
	
	int* list;
	printf("Enter the elements, space separated:\n");
	list = (int*) malloc(n * sizeof(int));
	
	if(list != NULL) {
	
		for (k = 0; k < n; k++) {
			scanf("%d", (list+k));
		}
			
		printf("The list reversed is:\n");
		for (i = (n-1); i >= 0; i--) {
			printf("%3d", *(list + i));
			if (i <= 0) {
				printf("\n");
			}
		}
	} else {
		printf("Memory Allocation Failed.");
	}
	return EXIT_SUCCESS;
}
