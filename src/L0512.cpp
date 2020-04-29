#include <cstdio>
using namespace std;
int main () {
	long long a, b;
	char e;
	scanf("%lld %c %lld", &a, &e, &b);
	if (e == '+') {
		long long sum = a + b;
		printf("%lld\n", sum);
	}
	else if (e == '-') {
		long long difference = a - b;
		printf("%lld\n", difference);
	}
	else if (e == '*') {
		long long product = a * b;
		printf("%lld\n", product);
	}
	else if (e == '/') {
		double da = a;
		double db = b;
		double quotient = da / db;
		int quo = quotient;
		if (quotient == quo) {
			printf("%d\n", quo);
		}
		else {
			printf("%.3lf\n", quotient);
		}
	}
	return 0;
}
