#include <cstdio>
using namespace std;
int main () {
	int n;
	scanf("%d", &n);
	double t = n;
	printf("%d\n", n);
	printf("%d\n", n + 1); 
	printf("%d\n", n - 10);
	printf("%d\n", n * 100);
	printf("%.3lf\n", t / 1000);
	printf("%d\n", n % 97);
	double s = 0.0;
	s = n + (n + 1) + (n - 10) + (n * 100) + (t / 1000) + (n % 97);
	printf("%.3lf\n", s);
	return 0;
}
