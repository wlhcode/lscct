#include <cstdio>
using namespace std;
int arr[201];
int main () {
	int n; scanf("%d",&n);
	for(int i = 0; i < n; i++) scanf("%d",&arr[i]);
	double sum = 0;
	for(int j = n - 1; j > -1; j--) sum = sum + arr[j];
	double nd = n;
	double mean = sum / nd;
	printf("%.3lf\n", mean);
	return 0;
}
