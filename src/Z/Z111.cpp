#include <cstdio>
#include <cmath>
using namespace std;
int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a) {
		double s = (a + b + c) / 2;
		double area = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("%.3lf\n", area);
	} else {
		printf("Impossible\n");
	}
	return 0;
}
