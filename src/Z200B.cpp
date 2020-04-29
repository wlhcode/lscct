#include <cstdio>
int main() {
  long long sum = 0;
  long long n;
  scanf("%lld", &n);
  for (int i = 1; i < n; i += 2) {
    sum += i * (i + 1);
  }
  printf("%lld\n", sum);
  return 0;
}
