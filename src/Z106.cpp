// Z106 Square Number
#include <cstdio>
#include <cmath>
int main() {
	int n, m;
	scanf("%d", &n);
	m= sqrt(n); // double stored into int
	m++;
	printf("%d\n", m * m);
	return 0;
}


