#include <stdio.h>

void stringReverse(char str[]) {
	// Base case: If the current character is the null character, return
	if (str[0] == '\0') {
		return;
	}

	// Recursive case: Call stringReverse with the next character in the array
	stringReverse(str + 1);

	// Print the current character
	printf("%c", str[0]);
}

int main() {
	char myString[] = "Hello, World!";

	printf("Original string: %s\n", myString);

	printf("Reversed string: ");
	stringReverse(myString);

	return 0;
}
