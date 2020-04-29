#include <cstdio>
using namespace std;
int a[65537];
int main() {
    long long N; 
	long long sum = 0;
	scanf("%lld", &N);
	for (int i = 0; i < N; i++) {
	    scanf("%d", &a[i]);
	} 
	for (int j = N - 1; j >= 0; j--) {
	    sum = sum + a[j];
	}
	printf("%lld\n", sum);
	return 0;
}
