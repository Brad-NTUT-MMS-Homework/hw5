#include <stdio.h>

void swap(int *element1Ptr, int *element2Ptr) {
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}

void bubbleSort(int * const array, const int size) {
	for (int pass = 0; pass < size-1; pass++) {
		for (int j = 0; j < size - 1; j++) {
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
		}
	}
}


int main() {
	int a[] = { 2,6,4,8,10,12,89,68,45,37 };
	int sizeOfA = sizeof(a) / sizeof(int);


	puts("Data items in original order");

	for (int i = 0; i < sizeOfA; i++) {
		printf("%4d", a[i]);
	}

	bubbleSort(a, sizeOfA);

	puts("\nData items in ascending order");

	for (int i = 0; i < sizeOfA; i++) {
		printf("%4d", a[i]);
	}

	return 0;
}
