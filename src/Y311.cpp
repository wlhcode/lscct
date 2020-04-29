#include <cstdio>
#include <cmath>
int main () {
	int n;
	scanf("%d", &n);
	int m = sqrt(n); // implicit casting
	for (int i = 2; i <= m; i++) {
		if (n % i == 0) {
			printf("Composite\n");
			return 0; // early termination
		}
	}
	printf("Prime\n");
	return 0;
}
