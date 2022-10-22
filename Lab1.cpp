#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	setlocale(0, "");
	int x1, y1, r1, x2, y2, r2;
	double rast;
	printf("Введите координаты центра и радиус первой окружности: ");
	scanf_s("%i%i%i", &x1, &y1, &r1);
	printf("Введите координаты центра и радиус второй окружности: ");
	scanf_s("%i%i%i", &x2, &y2, &r2);
	rast = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	if (x1 == x2 && y1 == y2 && r1 == r2)
		printf("Совпадают полностью");
	else if (rast < r1 - r2 || rast < r2 - r1)
		printf("Не пересекаются");
	else if (rast == r1 + r2 || rast == r1 - r2 || rast == r2 - r1)
		printf("Пересекаются в 1 точке");
	else if (rast > r1 + r2)
		printf("Не пересекаются");
	else if (rast < r1 + r2)
		printf("Пересекаются в 2 точках");
	return 0;
}