#include <stdio.h>

int binarySearch(int arr[], int key, int n) {
	int high = n - 1;
	int low = 0;
	
	int pivot = (high + low) >> 1;

	while (low <= high) {
		if (arr[pivot] == key) {
			return pivot;
		} else if (arr[pivot] > key) {
			low = low + 1;
		} else {
			high = high - 1;
		}
		
	}
	return -1;
}


int main() {
	int n, i, key;
	
	printf("\nEnter the number of elements of the array:\n");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the elements of the array:\n");
	
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the number to search for: \n");
	scanf("%d", &key);
	
	key = binarySearch(arr, key, n);
	if (key != -1) {
		printf("The number is found at: %d\n", (key + 1));
	} else {
		printf("The key is not found.\n");
	}
}
