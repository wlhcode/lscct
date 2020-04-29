#include <cstdio>
using namespace std;
int main() {
	int n;
	scanf("%d", &n);
	if (n == 10) printf("1\n"); // 5, 5;
	if (n == 9) printf("1\n"); // 5, 4;
	if (n == 8) printf("2\n"); // 5, 3; 4, 4;
	if (n == 7) printf("2\n"); // 5, 2; 4, 3;
	if (n == 6) printf("3\n"); // 5, 1; 4, 2; 3, 3;
	if (n == 5) printf("3\n"); // 5, 0; 4, 1; 3, 2;
	if (n == 4) printf("3\n"); // 4, 0; 3, 1; 2, 2;
	if (n == 3) printf("2\n"); // 3, 0; 2, 1;
	if (n == 2) printf("2\n"); // 2, 0; 1, 1;
	if (n == 1) printf("1\n"); // 1, 0
	return 0;
}
