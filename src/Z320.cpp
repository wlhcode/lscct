#include <cstdio>
using namespace std;
int arrN[1005];
int arrQ[1005];
int main() {
    int N, Q;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arrN[i]);
    }
    scanf("%d", &Q);
    for (int j = 0; j < Q; j++) {
        scanf("%d", &arrQ[j]);
    }
    for (int k = 0; k < Q; k++) {
        int arr = arrQ[k] - 1; 
        printf("%d\n", arrN[arr]);
    }
    return 0;
}
