#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("Test");
	int x = -2, ost = 0;
	int z = 0;
	int e = -1;
	while (((x < 0) && (e < 0) || ((x < 0) && (e >= 0)) || ((x >= 0) && (e < 0))) && (x < e)) {
		printf("Vvedite delimoe: ");
		scanf("%d", &x);

		printf("Vvedite delitel: ");
		scanf("%d", &e);
	}
	if (e == 0) { printf("ERROR!Please try again!"); return 0; }
	if ((x == 1) || (x == 0)) {
		printf("TRUE");
	}
	else if (e == 1) {
		printf("FALSE");
	}
	else {
		int y = x;
		while (y >= e) {
			ost += y % e;
			y /= e;
		}
		if ((ost == 0) && (x >= e)) {
			printf("TRUE");
		}
		else {
			printf("FALSE");
		}
	}
	return 0;
}