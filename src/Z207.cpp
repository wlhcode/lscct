#include <cstdio>
using namespace std;
int main() {
    int x;
    scanf("%d", &x);
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                printf("%d\n", j);
            }
            else {
                printf("  ");
            }
        }
    }
    return 0;
}
