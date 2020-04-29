#include <cstdio>
int arr[5001];
int main() {
    int n, save;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {		
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				save = arr[i];
				arr[i] = arr[j];
				arr[j] = save;
			}
		}
	}
	int secmin;
	for(int i=1;arr[i]==arr[i-1];i++){
		secmin=i;
	}
	printf("%d\n%d\n", arr[secmin+1], arr[n - 1]);
	return 0;
}
