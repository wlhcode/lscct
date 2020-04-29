#include <cstdio>
#include <cmath>
using namespace std;
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        for (int j = pow(i, 2) - 2 * (i - 1); j <= pow(i, 2); j++) {
            if (j != pow(i, 2)) {
                printf("%d ", j);
            }
            else if (j == pow(i, 2)) {
                printf("%d\n", j);
            }
        }
    }
    return 0;
}
