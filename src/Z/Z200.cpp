// Z200 For
#include <cstdio>
int main() {
	int i, n;
	int answer = 1;
	scanf("%d", &n);
	for (i = 1; i<=n; i++)  {
	  answer *= i;
	}
	printf("%d\n", answer);
	return 0;
}
