//C1316 - The Most Frequent Number
#include<cstdio>
int freq[10001];
int main() {
	int n, k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &k);
		freq[k]++;
	}
	int maxfreq = 0, maxi;
	for(int i = 1; i <= 10000; i++) {
		if (freq[i] > maxfreq) {
			maxfreq = freq[i];
			maxi = i;
		}
	}
	printf("%d\n", maxi);
	return 0;
}
