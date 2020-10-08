#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x=-1,ost=0;
	int z = 0;
	while (x < 0) {
		printf("Vvedite chislo: ");
		scanf("%d", &x);
	}
     if ((x == 1) || (x == 0)) {
		printf("TRUE");
	}
	else {
		int y = x;
		while (y >= 3) {
			ost += y % 3;
			y /= 3;
		}
		if ((ost == 0) && (x >= 3)) {
			printf("TRUE");
		}
		else {
			printf("FALSE");
		}
	}
	return 0;
}
