#include<stdio.h>
int main() {
	int N = 5;
	int k;
	for (k = 0; k < N; k++) {
		for (int j = N-k-1; j > 0; j--)
			printf(" ");
		for (int i = 0; i < 2*k+1; i++)
			printf("*");
		printf("\n");
	}
	for (k = 1; k <N; k++) {
		for (int j = 0; j < k; j++)
			printf(" ");
		for (int i = 2*(N-k)-1; i >0; i--)
			printf("*");
		printf("\n");
	}

}