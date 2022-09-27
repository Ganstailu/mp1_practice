#include <stdio.h>
#include <math.h>
int main() {
	int x1, y1, r1, x2, y2, r2;
	double d;
	scanf_s("%d%d%d%d%d%d", &x1, &y1, &r1, &x2, &y2, &r2);
	d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	if (x1 == x2 && y1 == y2 && r1 == r2) {
		printf("Odna okr v drugoi");
	}
	else if (d > r1 + r2) {
		printf("Okr ne peresecautcia");
	}
	else if (d == r1 + r2) {
		printf("Okr kasautcia vneshnim obrazom");
	}
	else if (d == r1 - r2) {
		printf("Okr kasautcia vnytrennim obrazom");
	}
	else if ((r1 - r2 < d) && (d < r1 + r2)) {
		printf("Okr peresecautcia v dvux tochkax");
	}
	else if (d < r1 - r2) {
		printf("Odna okr legit vnutri drugoi");
	}
	return 0;
}
