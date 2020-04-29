#include <cstdio>
#include <cmath>
using namespace std;
int arr[100005];
int main() {
    int N, X, D;
    int count = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &X, &D);
    for (int j = 0; j < N; j++) {
        int girl = abs(arr[j] - X);
        if (girl <= D) {
            count++;
        }
        else {
            count = count;
        }
    }
    printf("%d\n", count);
    return 0;
}
