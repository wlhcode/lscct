#include <cstdio>
#include <cmath>
using namespace std;
int main () {
	int k, n, w;
	scanf("%d %d %d", &k, &n, &w);
	int cost = (w + 1) * w * k / 2;
	int borrow;
	if (cost > n) {
		borrow = abs(n - cost);
	}
	else {
		borrow = 0;
	}
	printf("%d\n", borrow);
	return 0;
}
