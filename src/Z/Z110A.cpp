#include <cstdio>
#include <cstring>
char s[10001];
int main() {
	scanf("%s", s);
	int len = strlen(s);
	if (len >= 2 && s[len - 2] == '1') {
		printf("%sth\n", s);
	} else if (s[len - 1] == '1') {
		printf("%sst\n", s);
	} else if (s[len - 1] == '2') {
		printf("%snd\n", s);
	} else if (s[len - 1] == '3') {
		printf("%srd\n", s);
	} else {
		printf("%sth\n", s);
	}
	return 0;
}
