#include <cstdio>
using namespace std;
int main () {
	char a, b, X;
	int N;
	scanf("%c %c", &a, &b);
	scanf(" %c %d", &X, &N);
	int one = a - 96;
	int two = b - 96;
	int three = b - a;
	if (three >= 0) {
		three = b - a - 1;
	}
	else if (three < 0) {
		three = a - b - 1;
	}
	char four = X + N;
	printf("%c is the %d character in English alphabets.\n", a, one);
	printf("%c is the %d character in English alphabets.\n", b, two);
	printf("There are %d characters between them.\n", three);
	printf("The %d character after %c is %c.\n", N, X, four);
	return 0;
}
