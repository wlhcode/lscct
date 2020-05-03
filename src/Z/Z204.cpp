// Z204 Fibonacci Numbers
#include <cstdio>
int main() {
	int n;
	int a = 1, b = 1, c;
	scanf("%d", &n);
	for (int i = 3; i <=n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}
