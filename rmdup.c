#include <stdio.h>

int main() {
	int n, i, j, k, count = 0;
	
	printf("Enter the number of elements:\n");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter the elements of the array:\n");
	
	for (i = 0; i < n; i++) {
		scanf("%d",  &arr[i]);
	}
	
	for (j = 1; j < n; j++) {
		for (k = 0; k < j; k++) {
			if (j == k) {
				
			} else {
				if (arr[j] == arr[k]) {
					for (i = j + 1; i < n; i++) {
						arr[i - 1] = arr[i];
					}
					n--;
				}
			}
		}
	}
	
	
	for (j = 0; j < n; j++) {
		printf("%4d", arr[j]);
		if (j == (n-1)) {
			printf("\n");
		}
	} 
	return 0;
}
