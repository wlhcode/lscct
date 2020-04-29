#include <cstdio>
#include <cstring>
#include <cmath>
char s[2000];
int d[105];
int main() {
	int n;
	int c = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n * 18; i++) {
		scanf("%c", &s[i]);
		if (s[i] == '\n') c++;
		if (c == n + 1) goto skip;
	}
	skip:
	int begin = 0;
	int last = 0;
	int mbegin;
	int year, month, date;
	int dcount = 0;
	again:
	begin = last;
	for (int i = last + 1; s[i] != 10; i++) {
		last = i;
	}
	year = (s[last - 3] - 48) * 1000 + (s[last - 2] - 48) * 100 + (s[last - 1] - 48) * 10 + s[last] - 48;
	last = last + 1;
	for (int i = begin + 1; s[i] != ' '; i++) {
		mbegin = i + 2;
	}
	if (s[mbegin] == 'J' && s[mbegin + 1] == 'a') month = 1;
	if (s[mbegin] == 'F' && s[last - 6] == 'y') month = 2;
	if (s[mbegin] == 'M' && s[last - 6] == 'h') month = 3;
	if (s[mbegin] == 'A' && s[last - 6] == 'l') month = 4;
	if (s[mbegin] == 'M' && s[last - 6] == 'y') month = 5;
	if (s[mbegin] == 'J' && s[last - 6] == 'e') month = 6;
	if (s[mbegin] == 'J' && s[mbegin + 1] == 'u') month = 7;
	if (s[mbegin] == 'A' && s[last - 6] == 't') month = 8;
	if (s[mbegin] == 'S') month = 9;
	if (s[mbegin] == 'O') month = 10;
	if (s[mbegin] == 'N') month = 11;
	if (s[mbegin] == 'D') month = 12;
	if (s[mbegin - 4] != 10) date = (s[mbegin - 4] - 48) * 10 + s[mbegin - 3] - 48;
	if (s[mbegin - 4] == 10) date = s[mbegin - 3] - 48;
	d[dcount] = year * 10000 + month * 100 + date;
	dcount++;
	if (dcount == n) goto skiptwo;
	goto again;
	skiptwo:
	int save;
	for (int i = 0; i < n; i++) {		
		for (int j = i + 1; j < n; j++) {
			if (d[i] > d[j]) {
				save = d[i];
				d[i] = d[j];
				d[j] = save;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d, ", d[i] - d[i] / 100 * 100);
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 100) printf("January ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 200) printf("February ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 300) printf("March ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 400) printf("April ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 500) printf("May ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 600) printf("June ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 700) printf("July ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 800) printf("August ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 900) printf("September ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 1000) printf("October ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 1100) printf("November ");
		if (d[i] - d[i] / 10000 * 10000 - (d[i] - d[i] / 100 * 100) == 1200) printf("December ");
		printf("%d\n", d[i] / 10000);
	}
	return 0;
}
