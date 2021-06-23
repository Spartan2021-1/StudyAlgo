#include <stdio.h>

int main() {
	int basic, prod, sell, BEP;
	int i = 1;
	scanf_s("%d %d %d", &basic, &prod, &sell);
	while (1) {
		BEP = 0;
		if (prod >= sell) {
			BEP = -1;
			break;
		}
		else if (basic + prod * i <= sell*i) {
			BEP = i;
			break;
		}
		else
			i++;
	}
	printf("%d", BEP+1);
}