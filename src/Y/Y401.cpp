#include <cstdio>
int arr[5001];
int main() {
    int n, save;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    for (int i = 0; i < n; i++) {		
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				save = arr[i];
				arr[i] = arr[j];
				arr[j] = save;
			}
		}
	}
	for (int i = 0; i < n - 1; i++) printf("%d ", arr[i]);
	printf("%d\n", arr[n - 1]);
	return 0;
}
