#include <cstdio>
using namespace std;
int main () {
	int a, b;
	scanf("%d %d", &a, &b);
	int quotient;
	int remainder = a % b;
	for (quotient = a / b; quotient > 0; quotient--) {
		printf("%d\n", b);
	}
	if (remainder != 0) printf("%d\n", remainder);
	return 0;
}
