#include <cstdio>
int main() {
	int a, b, c, d;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	int ca = 0;
	if (a == 1) {
		ca = ca + 461;
	} else if (a == 2) {
		ca = ca + 431;
	} else if (a == 3) {
		ca = ca + 420;
	} else if (a == 4) {
		ca = ca;
	} if (b == 1) {
		ca = ca + 100;
	} else if (b == 2) {
		ca = ca + 57;
	} else if (b == 3) {
		ca = ca + 70;
	} else if (b == 4) {
		ca = ca;
	} if (c == 1) {
		ca = ca + 130;
	} else if (c == 2) {
		ca = ca + 160;
	} else if (c == 3) {
		ca = ca + 118;
	} else if (c == 4) {
		ca = ca;
	} if (d == 1) {
		ca = ca + 167;
	} else if (d == 2) {
		ca = ca + 266;
	} else if (d == 3) {
		ca = ca + 75;
	} else if (d == 4) {
		ca = ca;
	} printf("Your total Calorie count is %d.\n", ca);
	return 0;
}
