#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
	if (low > high) {
		return -1; // Element not found
	}

	int mid = low + (high - low) / 2;

	if (arr[mid] == key) {
		return mid; // Element found at index mid
	}
	else if (arr[mid] > key) {
		return binarySearch(arr, low, mid - 1, key); // Search left subarray
	}
	else {
		return binarySearch(arr, mid + 1, high, key); // Search right subarray
	}
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);

	int input;
	printf("Please enter key to search: ");
	scanf_s("%d", &input);

	int searchResult = binarySearch(arr, 0, n - 1, input);

	if (searchResult != -1) {
		printf("%d found at index %d\n", input, searchResult);
	}
	else {
		printf("%d not found in the array\n", input);
	}

	return 0;
}
