// Z200A For II
#include <cstdio>
int main() {
	int a, b, c;
	int sum = 0;
	scanf("%d", &c);
	for (a = 1; a <= c; a++) {
		int answer = 1;
		for (b = 1; b <= a; b++) {
			answer *= b;
		}
		sum += answer;
	}
	printf("%d\n", sum);
}
