#include <stdio.h>

// TODO: Fix the bubble sort.

int main() {
	int n, i, j, p, temp;
	
	printf("\nEnter the number of elements of the array:\n");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements of the array:\n");
	
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	for (j = 0; j < n; j++) {
		for (p = 0; p < n-j-1; p++) {
			if (arr[p] > arr[p+1]) {
				temp = arr[p+1];
				arr[p+1] = arr[p];
				arr[p] = temp; 
			}	
		}
	}
	
	printf("The sorted array is: \n");
	
	for (i = 0; i < n; i++) {
		printf("%4d\n", arr[i]);
	}
	
	printf("\n");
	
	return 0;
}

