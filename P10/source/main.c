#include <stdio.h>

void cubeByReference(int *nPtr) {
	*nPtr = *nPtr * *nPtr * *nPtr;
}

int main() {
	int number = 5;
	printf("The original value of number is %d", number);

	cubeByReference(&number);

	printf("\nThe new value of number is %d\n", number);
	return 0;
}