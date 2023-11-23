#include <stdio.h>

int findMax(int arr[], int size) {
	// Base case: If the array has only one element, return that element
	if (size == 1) {
		return arr[0];
	}

	// Recursive case: Find the maximum of the rest of the array
	int maxInRest = findMax(arr + 1, size - 1);

	// Compare the maximum of the rest with the current element
	return (arr[0] > maxInRest) ? arr[0] : maxInRest;
}

int main() {
	int arr[] = { 45, 78, 23, 56, 89, 12, 67, 90, 34, 56 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int maxNumber = findMax(arr, size);

	printf("The maximum number in the array is: %d\n", maxNumber);

	return 0;
}
