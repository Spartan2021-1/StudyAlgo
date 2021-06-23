#include <stdio.h>

int main() {
	int N, M;
	int ary[100] = { 0, };
	int sum = 0;
	while (1) {
		scanf_s("%d %d", &N, &M);
		if (N < 3 || N>100)
			printf("입력이 잘못되었습니다\n");
		else if (M < 10 || M>300000)
			printf("입력이 잘못되었습니다\n");
		else if (3 <= N <= 100 && 10 <= M <= 300000)
			break;
	}
	for (int i = 0; i < N;i++) {
		scanf_s("%d", &ary[i]);
	}
	for (int first = 0; first < N; first++) {
		for (int second = first + 1; second < N; second++) {
			for (int third = second + 1; third < N; third++) {
				if (ary[first] + ary[second] + ary[third] >= sum && ary[first] + ary[second] + ary[third] <= M)
					sum = ary[first] + ary[second] + ary[third];
			}
		}
	}
	printf("%d", sum);
	return 0;
}