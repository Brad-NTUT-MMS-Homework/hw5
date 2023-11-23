#include <stdio.h>
#include <stdlib.h>

void rollDice(int diceTable[][6]) {
	diceTable[rand() % 6][rand() % 6] ++;
}
int main() {
	srand(time(NULL));

	int diceTable[6][6] = { 0 };

	for (int i = 0; i < 36000; i++)
		rollDice(diceTable);

	printf("%6s", "     ");
	for (int i = 1; i <= 6 ; i++) {
		printf("%-6d", i);
	}

	puts("");

	for (int i = 0; i < 6; i++) {
		printf("%-6d", i + 1);
		for (int j = 0; j < 6; j++) {
			printf("%-6d", diceTable[i][j]);
		}
		puts("");
	}

	return 0;
}