#include <cstdio>
#include <cstring>
char s[200001], t[200001];
int main() {
	scanf("%s %s", s, t);
	int a = strlen(s);
	int b = strlen(t);
	int minn = a;
	if (b < minn) minn = b;
	int count = 0;
	for (int i = 1; i <= minn; i++) {
		if (a % i != 0 || b % i != 0) continue;
		if(strncmp(s, t, i) != 0) continue;
		bool ok = true;
		for(int j = i; j < a; j += i) {
			if (strncmp(s, s + j, i)) {
				ok = false;
			}
		}
		for (int j = i; j < b; j += i) {
			if (strncmp(t, t + j, i)) {
				ok = false;
			}
		}
		if (ok) count++;
	}
	printf("%d\n", count);
	return 0;
}
