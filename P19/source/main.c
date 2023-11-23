#include <stdio.h>

int main() {
	int b[] = { 10,20,30,40 };
	int *bPtr = b;
	
	puts("Array b printed with:\nArray subscript notation");

	for (int i = 0; i < 4; i++) {
		printf("b[%d] = %d\n", i, b[i]);
	}

	puts("\nPointer/offset notation where\n"
		"the pointer is the array name");

	for (int offset = 0; offset < 4; offset++) {
		printf("*(b + %d) = %d\n", offset, *(b + offset));
	}

	puts("\nPointer subscript notation");

	for (int i = 0; i < 4; i++) {
		printf("bPtr[%d] = %d\n", i, bPtr[i]);
	}

	puts("\nPointer/offset notation\n");
	
	for (int offset = 0; offset < 4; offset++) {
		printf("*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
	}

	return 0;
}