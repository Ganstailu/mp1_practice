#include <stdio.h>
#include <math.h>
int main() {
	int x, y, z;
	scanf_s("%d%d%d", &x, &y, &z);
	int srednee = (x > y) ? ((z < y) ? y : ((z < x) ? z : x)) : ((x > z) ? x : (y > z) ? z : y);
	printf("Srednee = %d\n", srednee);
	return 0;
}