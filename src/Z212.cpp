#include <cstdio>
int main() {
	int n;
	scanf("%d", &n);
	int j;
	for (int i = 0; i < n; i++) {
		for (j = 1; j < n; j++) {
			printf("%d ", i * n + j);
		}
		printf("%d\n", i * n + j);  
	}
	return 0;
}
