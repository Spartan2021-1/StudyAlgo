#include <stdio.h>

int main() {
	int input;
	scanf_s("%d", &input);
	for (int i = 1; i <= input; i++) {
		for (int blank = input - i; blank > 0; blank--)
			printf(" ");
		for (int star = 2 * i - 1; star > 0; star--)
			printf("*");
		printf("\n");
	}
	for (int i = input - 1; i > 0; i--) {
		for (int blank = input - i; blank > 0; blank--)
			printf(" ");
		for (int star = 2 * i - 1; star > 0; star--)
			printf("*");
		printf("\n");
	}
	return 0;
}