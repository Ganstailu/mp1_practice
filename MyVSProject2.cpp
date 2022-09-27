#include <stdio.h>
int main() {
	int x, y;
	scanf_s("%d%d", &x, &y);
	if ((x == 0) || (y == 0)) {
		printf("Ne v kakoyi chetverti");
	}
	else if ((x < 0) && (y > 0)) {
		printf("2 chetvert");
	}
	else if ((x < 0) && (y < 0)) {
		printf("3 chetvert");
	}
	else if ((x > 0) && (y < 0)) {
		printf("4 chetvert");
	}
	else if ((x > 0) && (y > 0)) {
		printf("1 chetvert");
	}
	return 0;
}