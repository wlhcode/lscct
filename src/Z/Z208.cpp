#include <cstdio>
int main() {
	int k, n;
	int max = 0, min = 99999;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &k);
		if (k > max) max = k;
		if (k < min) min = k;
		printf("%d %d\n", max, min);
	}
	return 0;
}
