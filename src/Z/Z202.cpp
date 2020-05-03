#include <cstdio>
int main () {
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = n; i > 0; i -= m) {
    printf("%d\n", i);
  }
  printf("Happy New Year!\n");
  return 0;
}
